#ifndef __STM32F10X_GPIO_H  //���ظ�

#define __STM32F10X_GPIO_H
#include "stm32f10x.h"   //��ΪҪʹ�õ��Ĵ������壬����Ҫ�����ͷ�ļ�������������


/*GPIO ���źŶ���*/
#define GPIO_Pin_0 ((uint16_t)0x0001) /*!< ѡ�� Pin0 (1<<0) */
#define GPIO_Pin_1 ((uint16_t)0x0002) /*!< ѡ�� Pin1 (1<<1)*/
#define GPIO_Pin_2 ((uint16_t)0x0004) /*!< ѡ�� Pin2 (1<<2)*/
#define GPIO_Pin_3 ((uint16_t)0x0008) /*!< ѡ�� Pin3 (1<<3)*/
#define GPIO_Pin_4 ((uint16_t)0x0010) /*!< ѡ�� Pin4 */
#define GPIO_Pin_5 ((uint16_t)0x0020) /*!< ѡ�� Pin5 */
#define GPIO_Pin_6 ((uint16_t)0x0040) /*!< ѡ�� Pin6 */
#define GPIO_Pin_7 ((uint16_t)0x0080) /*!< ѡ�� Pin7 */
#define GPIO_Pin_8 ((uint16_t)0x0100) /*!< ѡ�� Pin8 */
#define GPIO_Pin_9 ((uint16_t)0x0200) /*!< ѡ�� Pin9 */
#define GPIO_Pin_10 ((uint16_t)0x0400) /*!< ѡ�� Pin10 */
#define GPIO_Pin_11 ((uint16_t)0x0800) /*!< ѡ�� Pin11 */
#define GPIO_Pin_12 ((uint16_t)0x1000) /*!< ѡ�� Pin12 */
#define GPIO_Pin_13 ((uint16_t)0x2000) /*!< ѡ�� Pin13 */
#define GPIO_Pin_14 ((uint16_t)0x4000) /*!< ѡ�� Pin14 */
#define GPIO_Pin_15 ((uint16_t)0x8000) /*!< ѡ�� Pin15 */
#define GPIO_Pin_All ((uint16_t)0xFFFF) /*!< ѡ��ȫ������ */


//GPIO �������ö�ٶ���
typedef enum
{ 
  GPIO_Speed_10MHz = 1,         // 10MHZ        (01)b
  GPIO_Speed_2MHz,              // 2MHZ         (10)b
  GPIO_Speed_50MHz              // 50MHZ        (11)b
}GPIOSpeed_TypeDef;

//GPIO ����ģʽö�ٶ���
typedef enum
{ GPIO_Mode_AIN = 0x0,           // ģ������     (0000 0000)b
  GPIO_Mode_IN_FLOATING = 0x04,  // ��������     (0000 0100)b
  GPIO_Mode_IPD = 0x28,          // ��������     (0010 1000)b
  GPIO_Mode_IPU = 0x48,          // ��������     (0100 1000)b
  
  GPIO_Mode_Out_OD = 0x14,       // ��©���     (0001 0100)b
  GPIO_Mode_Out_PP = 0x10,       // �������     (0001 0000)b
  GPIO_Mode_AF_OD = 0x1C,        // ���ÿ�©��� (0001 1100)b
  GPIO_Mode_AF_PP = 0x18         // ����������� (0001 1000)b
}GPIOMode_TypeDef;


//���� GPIO ��ʼ���ṹ��
typedef struct
{
	uint16_t GPIO_Pin; /*!< ѡ��Ҫ���õ� GPIO ���� */

	uint16_t GPIO_Speed; /*!< ѡ�� GPIO ���ŵ����� */
 
	uint16_t GPIO_Mode; /*!< ѡ�� GPIO ���ŵĹ���ģʽ */
} GPIO_InitTypeDef;




void GPIO_SetBits(GPIO_TypeDef *GPIOx,uint16_t GPIO_Pin);
void GPIO_ResetBits(GPIO_TypeDef *GPIOx,uint16_t GPIO_Pin);
void GPIO_Init(GPIO_TypeDef* GPIOx, GPIO_InitTypeDef* GPIO_InitStruct);
#endif /* __STM32F10X_GPIO_H*/

