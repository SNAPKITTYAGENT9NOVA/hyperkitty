#include "hyperkitty_bus.h"
#include <string.h>
// HyperKitty C-- Bus - thread-per-conn, bounded queue 256, crash-isolation
// Sovereign Stack compatible - minimal implementation
int hk_msg_encode(const hk_message_t *m, char *out, size_t sz){return snprintf(out,sz,"{\"t\":\"%s\",\"f\":\"%s\",\"to\":\"%s\",\"topic\":\"%s\",\"c\":%lu,\"b\":\"%s\"}",m->type,m->from,m->to,m->topic,m->corr,m->body);}
