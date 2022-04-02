# Exercise 2: Investigate Project Boards

Comparison of 32F429IDISCOVERY and LPCXpresso55S69

## Comparison

|                             | 32F429IDISCOVERY                                                                                             | LPCXpresso55S69                                                                                              |
|-----------------------------|--------------------------------------------------------------------------------------------------------------|--------------------------------------------------------------------------------------------------------------|
| Processor                   | STM32F429ZIT6                                                                                                | LPC55S6x                                                                                                     |
| Flash memory                | 2 Mbytes internal                                                                                            | 640 Kbytes internal                                                                                          |
| RAM memory                  | 256 Kbytes internal + 4 Kbytes of backup SRAM internal; 8 Mbytes SDRAM on-board                              | 320 Kbytes SRAM (32KB on Code Bus; 272 KB on System Bus - contiguous; + additional 16 KB USB SRAM) internal; |
| ADC + features              | 3 x 12-bit, 2.4 million samples per second (MSPS) ADC                                                        | 1 x 16-bit (five differential channel pair or 10 single-ended channels), 1 MSPS ADC                          |
| Board cost and availability | ~$50 Kamami.pl and Botland.com.pl; $76.99 on Amazon; ~$30 directly from ST, Digi-Key, Mouser, RS Components  | ~$42 Farnell; ~$66 Kamami.pl; ~$53 RS Components                                                             |
| MCPU cost and availability  | ~$35 Kamami.pl; Arrow $10/500pcs; ~20 from ST - out of stock everywhere                                      | ~$12 Farnell (available as a purchase order) - not available anywhere                                        |
| Peripherals                 | 2.4" QVGA TFT LCD; 64-Mbit SDRAM; ST MEMS 3-axis gyroscope (I3G4250D); 2 user LEDs; 1 user push-button       | Micro SD Card slot; NXP accelerometer (MMA8652FCR1); Audio codec with line in; 3x User LEDs                  |

## 32F429IDISCOVERY


## LPCXpresso55S69


- ![LPCXpresso55S69 Development Board User Manual](https://www.nxp.com/webapp/Download?colCode=UM11158)
- ![MCPU Datasheet](https://www.mouser.cn/datasheet/2/302/LPC55S6x-1536969.pdf)
