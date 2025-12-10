# **PERSONAL NOTES - ft_printf**

## Introduction
- replicate function printf

## KEY CONCEPTS LEARNED

### 1. VARIADIC ARGUMENTS
- `function declaration`
  - a variadic function with n numbers of arguments
  is declared with (first_param, ...)
  - in order to navigate through the arguments, we need
  to declare a pointer (often named ap)with the va_list data type defined in stdarg
  - after declaring the pointer, we need to set it to va_start(first_param, ap);
  - to access current param, use va_arg(ap);
  - when we are done navigating, use va_end(ap);

- `va_arg`
  - va_arg accesses the current parameter in the arguement list
  - after it is used, will return the next element on the next use
  - va_arg is used with (ap, parameter_type)
