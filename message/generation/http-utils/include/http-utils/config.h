#ifndef MESSAGE_CONVERTER_C_HTTP_UTILS_CONFIG_H
#define MESSAGE_CONVERTER_C_HTTP_UTILS_CONFIG_H

#ifdef HTTP_UTILS_SELF_BUILD
#define HU_DLL_API __declspec(dllexport)
#else
#define HU_DLL_API __declspec(dllimport)
#endif

#endif //MESSAGE_CONVERTER_C_HTTP_UTILS_CONFIG_H
