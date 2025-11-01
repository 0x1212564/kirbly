#ifndef IMAGES_H_
#define IMAGES_H_

#include <avr/io.h>
#include <avr/pgmspace.h>

/**
 * @file images.h
 * @brief Declaraties voor de extern gedefinieerde afbeeldingen en de pointer-array.
 */

// Declaratie van de afbeeldingen.
extern const uint16_t kirby_image_1[40960] PROGMEM;
extern const uint16_t kirby_image_2[40960] PROGMEM;
extern const uint16_t kirby_image_3[40960] PROGMEM;
extern const uint16_t kirby_image_4[40960] PROGMEM;

// Een array van pointers naar de afbeeldingen, ook in PROGMEM
extern const uint16_t* const g_image_array[4] PROGMEM;

#endif // IMAGES_H_