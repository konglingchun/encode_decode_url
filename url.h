#ifndef URL_H
#define URL_H

#ifdef __cplusplus
extern "C" {
#endif

	char *php_url_encode(char const *s, int len, int *new_length);

	int php_url_decode(char *str, char *dest, int src_len);
#ifdef __cplusplus
}
#endif
#endif				/* URL_H */
