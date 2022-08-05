#include "../libs_lora_t/lib_lora.h"


bool LoraConfiguration_sx126x(sx126x_dev *dev,uint8_t SerialNumber,uint32_t PayloadLength)
{
    switch (SerialNumber)
    {
    case SX126X_SF7_BW500_CR_4_5:
        dev->modulation_params.PacketType = SX126X_PACKET_TYPE_LORA;
        dev->modulation_params.Params.LoRa.Bandwidth = SX126X_LORA_BW_500;
        dev->modulation_params.Params.LoRa.CodingRate = SX126X_LORA_CR_4_5;
        dev->modulation_params.Params.LoRa.LowDatarateOptimize = 0;
        dev->modulation_params.Params.LoRa.SpreadingFactor = SX126X_LORA_SF7;

        dev->packet_params.PacketType = SX126X_PACKET_TYPE_LORA;
        dev->packet_params.Params.LoRa.HeaderType = SX126X_LORA_PACKET_IMPLICIT;
        dev->packet_params.Params.LoRa.CrcMode = SX126X_LORA_CRC_ON;
        dev->packet_params.Params.LoRa.InvertIQ = SX126X_LORA_IQ_NORMAL;
        dev->packet_params.Params.LoRa.PreambleLength = 8;
        /* code */
        break;
    case SX126X_SF7_BW250_CR_4_5:
        dev->modulation_params.PacketType = SX126X_PACKET_TYPE_LORA;
        dev->modulation_params.Params.LoRa.Bandwidth = SX126X_LORA_BW_250;
        dev->modulation_params.Params.LoRa.CodingRate = SX126X_LORA_CR_4_5;
        dev->modulation_params.Params.LoRa.LowDatarateOptimize = 0;
        dev->modulation_params.Params.LoRa.SpreadingFactor = SX126X_LORA_SF7;

        dev->packet_params.PacketType = SX126X_PACKET_TYPE_LORA;
        dev->packet_params.Params.LoRa.HeaderType = SX126X_LORA_PACKET_IMPLICIT;
        dev->packet_params.Params.LoRa.CrcMode = SX126X_LORA_CRC_ON;
        dev->packet_params.Params.LoRa.InvertIQ = SX126X_LORA_IQ_NORMAL;
        dev->packet_params.Params.LoRa.PreambleLength = 8;
        /* code */
        break;
    case SX126X_SF7_BW125_CR_4_5:
        dev->modulation_params.PacketType = SX126X_PACKET_TYPE_LORA;
        dev->modulation_params.Params.LoRa.Bandwidth = SX126X_LORA_BW_125;
        dev->modulation_params.Params.LoRa.CodingRate = SX126X_LORA_CR_4_5;
        dev->modulation_params.Params.LoRa.LowDatarateOptimize = 0;
        dev->modulation_params.Params.LoRa.SpreadingFactor = SX126X_LORA_SF7;

        dev->packet_params.PacketType = SX126X_PACKET_TYPE_LORA;
        dev->packet_params.Params.LoRa.HeaderType = SX126X_LORA_PACKET_IMPLICIT;
        dev->packet_params.Params.LoRa.CrcMode = SX126X_LORA_CRC_ON;
        dev->packet_params.Params.LoRa.InvertIQ = SX126X_LORA_IQ_NORMAL;
        dev->packet_params.Params.LoRa.PreambleLength = 8;
        /* code */
        break;
    case SX126X_SF8_BW125_CR_4_5:
        dev->modulation_params.PacketType = SX126X_PACKET_TYPE_LORA;
        dev->modulation_params.Params.LoRa.Bandwidth = SX126X_LORA_BW_125;
        dev->modulation_params.Params.LoRa.CodingRate = SX126X_LORA_CR_4_5;
        dev->modulation_params.Params.LoRa.LowDatarateOptimize = 0;
        dev->modulation_params.Params.LoRa.SpreadingFactor = SX126X_LORA_SF8;

        dev->packet_params.PacketType = SX126X_PACKET_TYPE_LORA;
        dev->packet_params.Params.LoRa.HeaderType = SX126X_LORA_PACKET_IMPLICIT;
        dev->packet_params.Params.LoRa.CrcMode = SX126X_LORA_CRC_ON;
        dev->packet_params.Params.LoRa.InvertIQ = SX126X_LORA_IQ_NORMAL;
        dev->packet_params.Params.LoRa.PreambleLength = 8;
        /* code */
        break;
    case SX126X_SF9_BW125_CR_4_5:
        dev->modulation_params.PacketType = SX126X_PACKET_TYPE_LORA;
        dev->modulation_params.Params.LoRa.Bandwidth = SX126X_LORA_BW_125;
        dev->modulation_params.Params.LoRa.CodingRate = SX126X_LORA_CR_4_5;
        dev->modulation_params.Params.LoRa.LowDatarateOptimize = 0;
        dev->modulation_params.Params.LoRa.SpreadingFactor = SX126X_LORA_SF9;

        dev->packet_params.PacketType = SX126X_PACKET_TYPE_LORA;
        dev->packet_params.Params.LoRa.HeaderType = SX126X_LORA_PACKET_IMPLICIT;
        dev->packet_params.Params.LoRa.CrcMode = SX126X_LORA_CRC_ON;
        dev->packet_params.Params.LoRa.InvertIQ = SX126X_LORA_IQ_NORMAL;
        dev->packet_params.Params.LoRa.PreambleLength = 8;
        /* code */
        break;
    default:
        break;
    }
    dev->packet_params.Params.LoRa.PayloadLength = PayloadLength;
    return true;
}


// bool LoraConfiguration_sx126x(sx126x_dev *dev,uint8_t SerialNumber,uint32_t PayloadLength)
// {
//     switch (SerialNumber)
//     {
//     case SX126X_SF7_BW500_CR_4_5:
//         dev->modulation_params.PacketType = SX126X_PACKET_TYPE_LORA;
//         dev->modulation_params.Params.LoRa.Bandwidth = SX126X_LORA_BW_500;
//         dev->modulation_params.Params.LoRa.CodingRate = SX126X_LORA_CR_4_5;
//         dev->modulation_params.Params.LoRa.LowDatarateOptimize = 0;
//         dev->modulation_params.Params.LoRa.SpreadingFactor = SX126X_LORA_SF7;

//         dev->packet_params.PacketType = SX126X_PACKET_TYPE_LORA;
//         dev->packet_params.Params.LoRa.HeaderType = SX126X_LORA_PACKET_IMPLICIT;
//         dev->packet_params.Params.LoRa.CrcMode = SX126X_LORA_CRC_ON;
//         dev->packet_params.Params.LoRa.InvertIQ = SX126X_LORA_IQ_NORMAL;
//         dev->packet_params.Params.LoRa.PreambleLength = 8;
//         /* code */
//         break;
//     case SX126X_SF7_BW250_CR_4_5:
//         dev->modulation_params.PacketType = SX126X_PACKET_TYPE_LORA;
//         dev->modulation_params.Params.LoRa.Bandwidth = SX126X_LORA_BW_250;
//         dev->modulation_params.Params.LoRa.CodingRate = SX126X_LORA_CR_4_5;
//         dev->modulation_params.Params.LoRa.LowDatarateOptimize = 0;
//         dev->modulation_params.Params.LoRa.SpreadingFactor = SX126X_LORA_SF7;

//         dev->packet_params.PacketType = SX126X_PACKET_TYPE_LORA;
//         dev->packet_params.Params.LoRa.HeaderType = SX126X_LORA_PACKET_IMPLICIT;
//         dev->packet_params.Params.LoRa.CrcMode = SX126X_LORA_CRC_ON;
//         dev->packet_params.Params.LoRa.InvertIQ = SX126X_LORA_IQ_NORMAL;
//         dev->packet_params.Params.LoRa.PreambleLength = 8;
//         /* code */
//         break;
//     case SX126X_SF7_BW125_CR_4_5:
//         dev->modulation_params.PacketType = SX126X_PACKET_TYPE_LORA;
//         dev->modulation_params.Params.LoRa.Bandwidth = SX126X_LORA_BW_125;
//         dev->modulation_params.Params.LoRa.CodingRate = SX126X_LORA_CR_4_5;
//         dev->modulation_params.Params.LoRa.LowDatarateOptimize = 0;
//         dev->modulation_params.Params.LoRa.SpreadingFactor = SX126X_LORA_SF7;

//         dev->packet_params.PacketType = SX126X_PACKET_TYPE_LORA;
//         dev->packet_params.Params.LoRa.HeaderType = SX126X_LORA_PACKET_IMPLICIT;
//         dev->packet_params.Params.LoRa.CrcMode = SX126X_LORA_CRC_ON;
//         dev->packet_params.Params.LoRa.InvertIQ = SX126X_LORA_IQ_NORMAL;
//         dev->packet_params.Params.LoRa.PreambleLength = 8;
//         /* code */
//         break;
//     case SX126X_SF8_BW125_CR_4_5:
//         dev->modulation_params.PacketType = SX126X_PACKET_TYPE_LORA;
//         dev->modulation_params.Params.LoRa.Bandwidth = SX126X_LORA_BW_125;
//         dev->modulation_params.Params.LoRa.CodingRate = SX126X_LORA_CR_4_5;
//         dev->modulation_params.Params.LoRa.LowDatarateOptimize = 0;
//         dev->modulation_params.Params.LoRa.SpreadingFactor = SX126X_LORA_SF8;

//         dev->packet_params.PacketType = SX126X_PACKET_TYPE_LORA;
//         dev->packet_params.Params.LoRa.HeaderType = SX126X_LORA_PACKET_IMPLICIT;
//         dev->packet_params.Params.LoRa.CrcMode = SX126X_LORA_CRC_ON;
//         dev->packet_params.Params.LoRa.InvertIQ = SX126X_LORA_IQ_NORMAL;
//         dev->packet_params.Params.LoRa.PreambleLength = 8;
//         /* code */
//         break;
//     case SX126X_SF9_BW125_CR_4_5:
//         dev->modulation_params.PacketType = SX126X_PACKET_TYPE_LORA;
//         dev->modulation_params.Params.LoRa.Bandwidth = SX126X_LORA_BW_125;
//         dev->modulation_params.Params.LoRa.CodingRate = SX126X_LORA_CR_4_5;
//         dev->modulation_params.Params.LoRa.LowDatarateOptimize = 0;
//         dev->modulation_params.Params.LoRa.SpreadingFactor = SX126X_LORA_SF9;

//         dev->packet_params.PacketType = SX126X_PACKET_TYPE_LORA;
//         dev->packet_params.Params.LoRa.HeaderType = SX126X_LORA_PACKET_IMPLICIT;
//         dev->packet_params.Params.LoRa.CrcMode = SX126X_LORA_CRC_ON;
//         dev->packet_params.Params.LoRa.InvertIQ = SX126X_LORA_IQ_NORMAL;
//         dev->packet_params.Params.LoRa.PreambleLength = 8;
//         /* code */
//         break;
//     default:
//         break;
//     }
//     dev->packet_params.Params.LoRa.PayloadLength = PayloadLength;
//     return true;
// }



