#ifndef _CONFIG_H_
#define _CONFIG_H_

#define WORKER_LOW_STACK_SIZE    1024
#define WORKER_LOW_PRIORITY      (tskIDLE_PRIORITY + 2)
#define WORKER_LOW_QUEUE_LENGTH  32
#define WORKER_HIGH_STACK_SIZE   2048
#define WORKER_HIGH_PRIORITY     (tskIDLE_PRIORITY + 1)
#define WORKER_HIGH_QUEUE_LENGTH 64
#define WORKER_MAX_ARGS          3
#define WORKER_ARGS_BUFFER_SIZE  16

#define OW_SCK 13
#define OW_CSN 14
#define OW_SCK_LOOPBACK 18
#define OW_CSN_LOOPBACK 19
#define OW_TIMER NRF_TIMER2
#define OW_SPIS NRF_SPIS1
#define OW_PPI_CHANNEL 0
#define OW_GPIOTE_CHANNEL 0

#define FAST_TIMER_TIMER NRF_TIMER0
#define FAST_TIMER_IRQ TIMER0_IRQHandler
#define FAST_TIMER_IRQn TIMER0_IRQn
#define FAST_TIMER_PRESCALER 6 // Fast timer frequency = 16 MHz / 2 ^ FAST_TIMER_PRESCALER

#define DHT22_MEASURE_QUEUE_SIZE 4

#endif // _CONFIG_H_
