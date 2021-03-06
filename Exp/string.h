/*
 * string.h
 *
 *  Created on: Apr 23, 2011
 *      Author: blabos
 */

#ifndef _STRING_H
#define _STRING_H_

#define MAX_STR     256

int slen(const char* str);
int scmp(const char* first, const char* second, int max);
void scpy(char* dst, const char* src, int max);
void scat(char* dst, const char* src, int max);
void subs(char* sub, const char* orig, int from, int count);
void erase(char* str, int pos, int count);
void lower(char* str);

int is_alpha(unsigned char c);
int is_number(unsigned char c);
int is_alnum(unsigned char c);
int is_space(unsigned char c);
int is_null(unsigned char c);
int is_del(unsigned char c);
int is_comment(unsigned char c);
int is_new_line(unsigned char c);
int is_symbol(unsigned char c);
int is_open_parentesis(unsigned char c);
int is_close_parentesis(unsigned char c);
int is_operator(unsigned char c);


#endif /* STRING_H_ */
