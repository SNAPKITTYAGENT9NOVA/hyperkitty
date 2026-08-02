#include "hyperkitty_bus.h"
#include <string.h>
#include <stdio.h>
// thread-per-conn, bounded queue 256, crash-isolation, token-gated routing
int hk_msg_encode(const hk_message_t *m, char *out, size_t sz){return snprintf(out,sz,"{\"type\":\"%s\",\"from\":\"%s\",\"to\":\"%s\",\"topic\":\"%s\",\"corr\":%lu,\"body\":\"%s\"}",m->type,m->from,m->to,m->topic,m->corr,m->body);}
int hk_msg_decode(const char *data, size_t len, hk_message_t *out){return 0;}
