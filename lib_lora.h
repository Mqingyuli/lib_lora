#ifndef _LIB_LORA_H_
#define _LIB_LORA_H_

#include "sx126x.h"
// #include "sx128x.h"

typedef enum
{
    SX126X_SF7_BW500_CR_4_5 = 0x01,
    SX126X_SF7_BW250_CR_4_5 = 0x02,
    SX126X_SF7_BW125_CR_4_5,
    SX126X_SF8_BW125_CR_4_5,
    SX126X_SF9_BW125_CR_4_5,
}Lora_Configuration_sx126x_t;
typedef enum
{
    SX128X_SF7_BW500_CR_4_5 = 0x01,
    SX128X_SF7_BW250_CR_4_5 = 0x02,
    SX128X_SF7_BW125_CR_4_5,
    SX128X_SF8_BW125_CR_4_5,
    SX128X_SF9_BW125_CR_4_5,
}Lora_Configuration_sx128x_t;


bool LoraConfiguration_sx126x(sx126x_dev *dev,uint8_t SerialNumber,uint32_t PayloadLength);

#endif /* BCF64533_44B0_4263_9037_2948A706AE60 */
