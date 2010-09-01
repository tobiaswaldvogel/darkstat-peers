/* darkstat 3
 * copyright (c) 2001-2006 Emil Mikulic.
 *
 * http.h: embedded webserver.
 */

#include <sys/time.h>
#include <sys/select.h>
#include <netinet/in.h>

extern const char *base_url;

void http_init_base(const char *path);
void http_init(const char * bindaddr, const unsigned short bindport,
   const int max_conn);
void http_fd_set(fd_set *recv_set, fd_set *send_set, int *max_fd,
   struct timeval *timeout, int *need_timeout);
void http_poll(fd_set *read_set, fd_set *write_set);

/* vim:set ts=3 sw=3 tw=78 expandtab: */
