/*
                                   )
                                  (.)
                                  .|.
                                  | |
                              _.--| |--._
                           .-';  ;`-'& ; `&.
                          \   &  ;    &   &_/
                           |"""---...---"""|
                           \ | | | | | | | /
                            `---.|.|.|.---'

 * This file is generated by bake.lang.c for your convenience. Headers of
 * dependencies will automatically show up in this file. Include bake_config.h
 * in your main project file. Do not edit! */

#ifndef REFLECS_MATH_BAKE_CONFIG_H
#define REFLECS_MATH_BAKE_CONFIG_H

/* Headers of public dependencies */
/* No dependencies */

/* Headers of private dependencies */
#ifdef REFLECS_MATH_IMPL
/* No dependencies */
#endif

/* Convenience macro for exporting symbols */
#if REFLECS_MATH_IMPL && defined _MSC_VER
#define REFLECS_MATH_EXPORT __declspec(dllexport)
#elif REFLECS_MATH_IMPL
#define REFLECS_MATH_EXPORT __attribute__((__visibility__("default")))
#elif defined _MSC_VER
#define REFLECS_MATH_EXPORT __declspec(dllimport)
#else
#define REFLECS_MATH_EXPORT
#endif

#endif
