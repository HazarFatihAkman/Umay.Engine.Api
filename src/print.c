#include "../include/print.h"

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

static void _print_log_(
  const char *log,
  const char *property_name,
  const char *format,
  va_list args
) {
  dprintf(STDOUT_FILENO, LOG_FORMAT, property_name, log);
  vdprintf(STDOUT_FILENO, format, args);
  ssize_t ret = write(STDOUT_FILENO, "\n", 1);
  if (ret < 0) {
    perror("write failed");
  }
}

void print_info(const char *property_name, const char *format, ...) {
  va_list args;
  va_start(args, format);
  _print_log_(LOG_INFO, property_name, format, args);
  va_end(args);
}

void print_err(const char *property_name, const char *format, ...) {
  va_list args;
  va_start(args, format);
  _print_log_(LOG_ERROR, property_name, format, args);
  va_end(args);
}

void print_warn(const char *property_name, const char *format, ...) {
  va_list args;
  va_start(args, format);
  _print_log_(LOG_WARN, property_name, format, args);
  va_end(args);
}

