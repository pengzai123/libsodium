/*
 * Utility functions shared by all the demo programs.
 */
#ifndef DEMO_UTILS_H
#define DEMO_UTILS_H

#include <stddef.h>

#define MAX_INPUT_SIZE 4096 /* max size of all input buffers in the demo */

void print_hex(const void *bin, const size_t bin_len);
size_t prompt_input(char *prompt, char *input, const size_t max_input_len);
void print_verification(int r);

#endif /* DEMO_UTILS_H */
