#pragma once
#include <stdint.h>
#include <stdbool.h>
#define HK_QUEUE_MAX 256
#define HK_MAX_TOPIC_LEN 128
#define HK_MAX_BODY 8192
typedef struct { char type[32]; char from[64]; char to[64]; char topic[128]; uint64_t corr; char body[8192]; } hk_message_t;
