/* Phillip Holland
 * COSC 2347 - Spring 2019
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Helpers.h"


void prompt_for_input(char message[], char response[]){
    size_t max_length = strlen(response);
    char* raw_input = NULL;

    printf("%s\n", message);
    ssize_t response_length = getline(&raw_input, &max_length, stdin);
    strcpy(response, raw_input);

    //Strip trailing newline
    if(response[response_length - 1] == '\n') {
        response[response_length - 1] = (char)'\0';
    }

    printf("received input: \"%s\"\n", response);
}

double prompt_for_double(char message[]){
    double value;
    char response[32];

    prompt_for_input(message, response);
    value = strtod(response, NULL);

    return value;
}

float prompt_for_float(char message[]){
    float value;
    char response[32];

    prompt_for_input(message, response);
    value = strtof(response, NULL);

    return value;
}

bool filepath_exists(char path[]){

    FILE *file = fopen(path,"r");

    if (file == NULL){
        return false;
    } else {
        fclose(file);
        return true;
    }
}