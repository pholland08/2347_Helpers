/* Phillip Holland
 * COSC 2347 - Spring 2019
 */

#ifndef COSC_2347_HELPERS_H
#define COSC_2347_HELPERS_H

#include <stdbool.h>

void prompt_for_input(char message[], char response[]);

double prompt_for_double(char message[]);

float prompt_for_float(char message[]);

bool filepath_exists(char *path);

#endif //COSC_2347_HELPERS_H
