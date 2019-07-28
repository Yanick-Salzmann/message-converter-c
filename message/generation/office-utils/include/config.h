#ifndef MESSAGE_CONVERTER_C_CONFIG_H
#define MESSAGE_CONVERTER_C_CONFIG_H

#ifdef SELF_BUILD_OFFICE_UTILS
#define OU_DLL_API __declspec(dllexport)
#else
#define OU_DLL_API __declspec(dllimport)
#endif

#endif //MESSAGE_CONVERTER_C_CONFIG_H
