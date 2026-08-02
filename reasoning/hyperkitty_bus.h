/* hyperkitty_bus.h — Hyperkitty C-- Bus - Bare-metal twin of hc_bus.cpp */
#pragma once
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <pthread.h>
#define HK_QUEUE_MAX 256
#define HK_MAX_SUBS_PER_CONN 64
#define HK_MAX_TOPIC_LEN 128
#define HK_MAX_CONNS 256
#define HK_MAX_ID_LEN 64
#define HK_MAX_BODY 8192
typedef struct { char type[32]; char from[64]; char to[64]; char topic[128]; uint64_t corr; char body[8192]; } hk_message_t;
int hk_msg_encode(const hk_message_t *m, char *out, size_t out_sz);
int hk_msg_decode(const char *data, size_t len, hk_message_t *out);
