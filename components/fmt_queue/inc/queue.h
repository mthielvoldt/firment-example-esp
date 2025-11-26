#ifndef FMT_QUEUE_H
#define FMT_QUEUE_H

#include <freertos/FreeRTOS.h>
#include <freertos/queue.h>

BaseType_t xQueueSetHighestSenderPriority(
    QueueHandle_t xQueue,
    UBaseType_t priority);

#endif // FMT_QUEUE_H