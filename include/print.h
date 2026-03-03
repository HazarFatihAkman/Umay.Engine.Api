#ifndef UMAY_ENGINE_API_PRINT_H
#define UMAY_ENGINE_API_PRINT_H

#define LOG_INFO "Info"
#define LOG_ERROR "Error"
#define LOG_WARN "Warn"
#define LOG_FORMAT "[%s %s] :"

#define PRINT_NULL_ERR(property_name) print_err(property_name, "Cannot be null!");

void print_info(const char *property_name, const char *format, ...);
void print_warn(const char *property_name, const char *format, ...);
void print_err(const char *property_name, const char *format, ...);

#endif // UMAY_ENGINE_API_PRINT_H

