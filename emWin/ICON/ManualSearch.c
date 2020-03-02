/*********************************************************************
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                           www.segger.com                           *
**********************************************************************
*                                                                    *
* C-file generated by                                                *
*                                                                    *
*        Bitmap Converter for emWin V5.30.                           *
*        Compiled Jul  1 2015, 10:49:26                              *
*                                                                    *
*        (c) 1998 - 2015 Segger Microcontroller GmbH & Co. KG        *
*                                                                    *
**********************************************************************
*                                                                    *
* Source file: ManualSearch                                          *
* Dimensions:  48 * 48                                               *
* NumColors:   32bpp: 16777216 + 256                                 *
*                                                                    *
**********************************************************************
*/

#include <stdlib.h>

#include "GUI.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif

extern GUI_CONST_STORAGE GUI_BITMAP bmManualSearch;

static GUI_CONST_STORAGE unsigned long _acManualSearch[] = {
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF3C3C3C, 0xFF3D3D3D, 0xE53C3C3C, 
        0x903D3D3D, 0x423D3D3D, 0x1D3D3D3D, 0x153D3D3D, 0x1B3D3D3D, 0x313D3D3D, 0x5E3D3D3D, 0xA43D3D3D, 0xE83C3C3C, 0xFF3E3E3E, 0xFF3C3C3C, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF3C3C3C, 0xFF393939, 0xBF3C3C3C, 0x3B3C3C3C, 
        0x043C3C3C, 0x003C3C3C, 0x003C3C3C, 0x003C3C3C, 0x003C3C3C, 0x003C3C3C, 0x003C3C3C, 0x083C3C3C, 0x383C3C3C, 0xA53C3C3C, 0xF83C3C3C, 0xFF3C3C3C, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF3C3C3C, 0xFF3B3B3B, 0xB93B3B3B, 0x1E3B3B3B, 0x003B3B3B, 
        0x003B3B3B, 0x003B3B3B, 0x003B3B3B, 0x003B3B3B, 0x003B3B3B, 0x003B3B3B, 0x003B3B3B, 0x003B3B3B, 0x003B3B3B, 0x093B3B3B, 0x753B3B3B, 0xF23B3B3B, 0xFF3B3B3B, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF3E3E3E, 0xFF3A3A3A, 0xDA3A3A3A, 0x2D3A3A3A, 0x003B3B3B, 0x003B3B3B, 
        0x003B3B3B, 0x003B3B3B, 0x003B3B3B, 0x003B3B3B, 0x003B3B3B, 0x003B3B3B, 0x003B3B3B, 0x003B3B3B, 0x003B3B3B, 0x003B3B3B, 0x043B3B3B, 0x783A3A3A, 0xFA3A3A3A, 0xFF3A3A3A, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF393939, 0xFC393939, 0x6C3A3A3A, 0x003A3A3A, 0x003A3A3A, 0x003A3A3A, 
        0x003A3A3A, 0x003A3A3A, 0x003A3A3A, 0x003A3A3A, 0x003A3A3A, 0x003A3A3A, 0x01393838, 0x00393939, 0x003A3A3A, 0x003A3A3A, 0x003A3A3A, 0x0C3A3A3A, 0xAA3A3A3A, 0xFF3A3A3A, 0xFF393939, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF393939, 0xCD393939, 0x17393939, 0x00393939, 0x00393939, 0x00393939, 
        0x00393939, 0x00393939, 0x00393939, 0x00393939, 0x00373737, 0x01596365, 0x057D9197, 0x00474B4D, 0x00373737, 0x00393939, 0x00393939, 0x00393939, 0x37393939, 0xE9393939, 0xFF393939, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF383838, 0xFF393939, 0x7C383838, 0x00383838, 0x00383838, 0x00383838, 0x00383838, 
        0x00383838, 0x00383838, 0x00383838, 0x00383838, 0x00383939, 0x008EA7AC, 0x00CCF6FF, 0x00A8C8D0, 0x00565F61, 0x00373636, 0x00383838, 0x00383838, 0x03383838, 0x9B383838, 0xFF383838, 0xFF393939, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF373737, 0xED373737, 0x35373737, 0x00383838, 0x00373737, 0x00373737, 0x00373737, 
        0x00373737, 0x00373737, 0x00383838, 0x00363636, 0x004D5455, 0x00B7DCE6, 0x00CAF5FF, 0x00CBF6FF, 0x00AFD2DB, 0x0051585A, 0x00363635, 0x00383838, 0x00383838, 0x45373737, 0xF4373737, 0xFF373737, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF373737, 0xC4373737, 0x0E373737, 0x00373737, 0x00373737, 0x00373737, 0x00373737, 
        0x00363636, 0x00373737, 0x00373737, 0x00363636, 0x0082979D, 0x00CAF4FF, 0x00C9F3FE, 0x00C9F3FE, 0x00CBF6FF, 0x009CB9C0, 0x003E4041, 0x00363636, 0x00373737, 0x11373737, 0xC8373737, 0xFF373737, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF363636, 0xFF363636, 0x91363636, 0x00363636, 0x00363636, 0x00353535, 0x00353535, 0x00353535, 
        0x00484D4F, 0x003C3E3F, 0x00343333, 0x00525B5D, 0x00B8DEE8, 0x00C9F4FF, 0x00C8F3FE, 0x00C8F3FE, 0x00C8F3FE, 0x00C5EFF9, 0x0069787C, 0x00343333, 0x00363636, 0x00363636, 0x8A363636, 0xFF363636, 0xFF363636, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF353535, 0xFE343434, 0x61353535, 0x00353535, 0x00353535, 0x013F4243, 0x04454A4C, 0x01424647, 
        0x00859FA6, 0x00434849, 0x003F4344, 0x0099BAC2, 0x00C5F3FF, 0x00C3F1FD, 0x00C3F1FD, 0x00C3F1FD, 0x00C3F1FD, 0x00C5F4FF, 0x0199B9C1, 0x00393B3B, 0x00353535, 0x00353535, 0x4D353535, 0xF9353535, 0xFF353535, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF343434, 0xF2343434, 0x3A353534, 0x00343333, 0x005E6D71, 0x02A1C9D3, 0x04ADD9E5, 0x01A0C7D1, 
        0x00ACD7E2, 0x02606F74, 0x0290B1B9, 0x00BEF0FC, 0x00BEF0FD, 0x00BEF0FD, 0x00BEF0FD, 0x00BEF0FD, 0x00BEF0FD, 0x00BFF1FE, 0x01B1DDE9, 0x01495153, 0x00333333, 0x00353535, 0x21353535, 0xE0343434, 0xFF343434, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF343434, 0xE0343434, 0x20343434, 0x00333333, 0x0083A2AA, 0x00BDF4FF, 0x00BAF0FD, 0x00BBF1FE, 
        0x00B8ECF9, 0x01B1E3F0, 0x00BAEFFD, 0x00BAEFFC, 0x00B9EEFC, 0x00B9EEFC, 0x00B9EEFC, 0x00B9EEFC, 0x00B9EEFC, 0x00BAEFFC, 0x00B6EAF7, 0x005A696C, 0x00323131, 0x00343434, 0x09343434, 0xBA343434, 0xFF343434, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF333333, 0xC8333333, 0x0E333333, 0x00323232, 0x0080A1A9, 0x00B7F0FF, 0x00B4EDFB, 0x00B4EDFB, 
        0x00B5EDFB, 0x00B5EEFC, 0x00B5EDFB, 0x00B4EDFB, 0x00B4EDFB, 0x00B4EDFB, 0x00B4EDFB, 0x00B4EDFB, 0x00B4EDFB, 0x00B5EDFB, 0x00B4ECFA, 0x0061767B, 0x00313030, 0x00333333, 0x00333333, 0x94333333, 0xFF333333, 0xFF333333, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF323232, 0xAC323232, 0x03323232, 0x00313131, 0x007A9CA5, 0x00B2EEFE, 0x00AFEBFB, 0x00AFEBFB, 
        0x00AFEBFB, 0x00AFEBFB, 0x00AFEBFB, 0x00AFEBFB, 0x00AFEBFB, 0x00AFEBFB, 0x00AFEBFB, 0x00AFEBFB, 0x00AFEBFB, 0x00B0EBFB, 0x00AFEAFA, 0x005F7479, 0x00302F2F, 0x00323232, 0x00323232, 0x74323232, 0xFF323232, 0xFF323232, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF313131, 0xFF323232, 0x89313131, 0x00313131, 0x00302F2F, 0x0072949C, 0x00ADEDFD, 0x00ABEAFA, 0x00ABEAFA, 
        0x00ABEAFA, 0x00ABEAFA, 0x00ABEAFA, 0x00ABEAFA, 0x00ABEAFA, 0x00ABEAFA, 0x00ABEAFA, 0x00ABEAFA, 0x00ABEAFA, 0x00ABEAFA, 0x00A8E6F5, 0x0055676C, 0x00302F2E, 0x00313131, 0x00313131, 0x5E313131, 0xFE313131, 0xFF313131, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF303030, 0xF4303030, 0x4D313131, 0x00313131, 0x002F2E2E, 0x0067868D, 0x00A7EAFB, 0x00A6E9F9, 0x00A6E9F9, 
        0x00A6E9F9, 0x00A6E9F9, 0x00A6E9F9, 0x00A6E9F9, 0x00A6E9F9, 0x00A6E9F9, 0x00A6E9F9, 0x00A6E9F9, 0x00A6E9F9, 0x00A6E9FA, 0x009FDDEC, 0x00485659, 0x002F2E2E, 0x00313131, 0x00313131, 0x52313131, 0xFC313131, 0xFF313131, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF2F2F2F, 0xFF313131, 0xED2F2F2F, 0x7E303030, 0x08303030, 0x00303030, 0x002E2D2D, 0x00587177, 0x00A0E6F7, 0x00A1E7F9, 0x00A1E7F8, 
        0x00A1E7F8, 0x00A1E7F8, 0x00A1E7F8, 0x00A1E7F8, 0x00A1E7F8, 0x00A1E7F8, 0x00A1E7F8, 0x00A1E7F8, 0x00A1E7F8, 0x00A2E9FA, 0x0090CBDA, 0x003B4244, 0x002F2F2F, 0x00303030, 0x00303030, 0x4E303030, 0xFB303030, 0xFF303030, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF2F2F2F, 0xF52F2F2F, 0xC72F2F2F, 0xA82F2F2F, 0x7D2F2F2F, 0x372F2F2F, 0x052F2F2F, 0x002F2F2F, 0x002F2F2F, 0x002E2D2D, 0x00465659, 0x0096DBEC, 0x009DE6F9, 0x009CE6F8, 
        0x009CE6F8, 0x009CE6F8, 0x009CE6F8, 0x009CE6F8, 0x009CE6F8, 0x009CE6F8, 0x009CE6F8, 0x009CE6F8, 0x009CE6F8, 0x009EE9FB, 0x0078A9B5, 0x00313232, 0x002F2F2F, 0x002F2F2F, 0x002F2F2F, 0x532F2F2F, 0xFC2F2F2F, 0xFF2F2F2F, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF2F2F2F, 0xF72F2F2F, 0xB02F2F2F, 0x552F2F2F, 0x212F2F2F, 0x082E2E2E, 0x002E2E2E, 0x002E2E2E, 0x002E2E2E, 0x002E2E2E, 0x0034383A, 0x007DB7C5, 0x0099E7FA, 0x0097E4F7, 
        0x0097E4F7, 0x0097E4F7, 0x0097E4F7, 0x0097E4F7, 0x0097E4F7, 0x0097E4F7, 0x0097E4F7, 0x0097E4F7, 0x0097E4F7, 0x0096E2F5, 0x01557178, 0x002D2C2C, 0x002E2E2E, 0x002E2E2E, 0x002E2E2E, 0x612E2E2E, 0xFF343434, 0xFF2F2F2F, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF2E2E2E, 0xFC2E2E2E, 0x8D2E2E2E, 0x3A2E2E2E, 0x112E2E2E, 0x002E2E2E, 0x002E2E2E, 0x002E2E2E, 0x002E2E2E, 0x002D2C2C, 0x004C6369, 0x008BD5E8, 0x0093E4F8, 
        0x0092E3F6, 0x0092E3F6, 0x0092E3F6, 0x0092E3F6, 0x0092E3F6, 0x0092E3F6, 0x0092E3F6, 0x0092E3F6, 0x0093E5F9, 0x0078B3C2, 0x00353B3C, 0x002D2D2D, 0x002E2E2E, 0x002E2E2E, 0x002E2E2E, 0x792E2E2E, 0xFF2E2E2E, 0xFF2E2E2E, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF2D2D2D, 0xFF2D2D2D, 0x7E2D2D2D, 0x002D2D2D, 0x002D2D2D, 0x002D2D2D, 0x002D2D2D, 0x002D2D2D, 0x002D2D2D, 0x002D2D2D, 0x002D2D2D, 0x0054757E, 0x0088D6EA, 
        0x008DE2F7, 0x008DE1F6, 0x008DE1F6, 0x008DE1F6, 0x008DE1F6, 0x008DE1F6, 0x008DE1F6, 0x008EE2F7, 0x0085CDDE, 0x00435459, 0x002C2B2B, 0x002D2D2D, 0x002D2D2D, 0x002D2D2D, 0x002D2D2D, 0x9C2D2D2D, 0xFF2D2D2D, 0xFF2D2D2D, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF2C2C2C, 0xE42C2C2C, 0x522C2C2C, 0x082C2C2C, 0x002C2C2C, 0x002C2C2C, 0x002C2C2C, 0x002C2C2C, 0x002C2C2C, 0x002C2C2C, 0x002C2D2D, 0x005D8089, 
        0x008DDDF1, 0x0088DFF4, 0x0088E0F5, 0x0088E0F5, 0x0088E0F5, 0x0088E0F5, 0x0088DFF4, 0x0093E1F5, 0x0093C4D1, 0x0036393A, 0x002C2B2B, 0x002C2C2C, 0x002C2C2C, 0x002C2C2C, 0x0E2C2C2C, 0xC62C2C2C, 0xFF2C2C2C, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF2B2B2B, 0xFF2C2C2C, 0xF02C2C2C, 0xB92C2C2C, 0x6C2C2C2C, 0x082B2B2B, 0x002B2B2B, 0x002B2B2B, 0x002B2B2B, 0x002B2B2B, 0x00292828, 0x00536468, 
        0x00A8E4F4, 0x0097E1F3, 0x008ADDF1, 0x0086DCF1, 0x0086DCF2, 0x008ADDF1, 0x0099E1F3, 0x00AEEBFA, 0x00A5D8E5, 0x003E4648, 0x002A2A2A, 0x002B2B2B, 0x002B2B2B, 0x002B2B2B, 0x342B2B2B, 0xEC2C2C2C, 0xFF2C2C2C, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF2B2B2B, 0xF92B2B2B, 0x952B2B2B, 0x2F2B2B2B, 0x012B2B2B, 0x002B2B2B, 0x002B2B2B, 0x002A2B2A, 0x002A2A28, 0x00292726, 0x005D747A, 
        0x00ADEAFA, 0x00ADEAFA, 0x00A8E8F8, 0x00A4E6F6, 0x00A3E6F6, 0x00A8E8F8, 0x00ADEAFA, 0x00ADEBFB, 0x00A6E1F0, 0x0048575A, 0x00282726, 0x002B2B2B, 0x002B2B2B, 0x002B2B2B, 0x7C2B2B2B, 0xFF2A2A2A, 0xFF2B2B2B, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF2B2B2B, 0xFF272727, 0xC52A2A2A, 0x422A2A2A, 0x052A2A2A, 0x002A2A2A, 0x00282928, 0x002D2A2C, 0x003C3955, 0x002C6B95, 0x007BBBD3, 
        0x00A8EAFA, 0x00A6E9F9, 0x00A7E9F9, 0x00A7E9F9, 0x00A6E9F9, 0x00A5E8F9, 0x00A8E9F9, 0x00ADEAFA, 0x00A2E4F8, 0x00448BB6, 0x00343952, 0x00292729, 0x00292A29, 0x212A2A2A, 0xD52A2A2A, 0xFF2A2A2A, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF2A2A2A, 0xFF292A29, 0xEE2A2A2A, 0x9F262925, 0x392A292A, 0x02493153, 0x008741A1, 0x00AA52DE, 0x00528AF2, 0x004AB9F4, 
        0x0099E3F8, 0x00A1E7F8, 0x00A0E7F8, 0x009FE6F8, 0x00AAE9F9, 0x00C7F0FB, 0x00E0F7FC, 0x00ECFAFD, 0x00E8F7FD, 0x00C9E5FB, 0x00C5B1E1, 0x00786280, 0x0D302D31, 0x9A252624, 0xFF000000, 0xFF292A28, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFFFA6AFF, 0xFF7D35D4, 0xDFCB52F6, 0x61AF4BD7, 0x03B44CDE, 0x00C14FEF, 0x00C24EED, 0x00A45DED, 0x003B94EF, 
        0x005EC4F3, 0x0099E5F7, 0x009AE5F7, 0x00B8ECF9, 0x00EAF9FC, 0x00FDFDFD, 0x00FFFEFE, 0x00FFFFFE, 0x00FFFFFE, 0x00FFFFFE, 0x00FFFFFF, 0x00F4EFF6, 0x30C7BDCB, 0xD9C8A8D0, 0xFFB8BEC1, 0xFFFF32FF, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFFBD4DEA, 0xF5BD4DEA, 0x9EBE4DEB, 0x29BE4EEB, 0x00BF4EEC, 0x00BF4EEC, 0x00BE4EEB, 0x00BE4EEB, 0x00C04DEB, 0x008A69EC, 
        0x0032A0EF, 0x0070CFF4, 0x00B7ECF8, 0x00F3F9FB, 0x00FDFCFB, 0x00FCFAFA, 0x00EDF0F2, 0x00D6E0EC, 0x00E1D4EB, 0x00ECE3EF, 0x00F7F8F7, 0x00FCFDFC, 0x00FDFDFD, 0x38F1DFF9, 0xC5D081EF, 0xFFFFFFFF, 0xFFB536E8, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFFBC4DE9, 0xFFBD4CEA, 0xDBBD4CEA, 0x5DBD4DEA, 0x08BD4DEA, 0x00BD4DEA, 0x00BD4DEA, 0x00BD4DEA, 0x00BD4DEA, 0x00BD4DEA, 0x00BD4DEA, 0x00BC4DEA, 
        0x006A76EC, 0x0057B7F1, 0x00E8F4F8, 0x00FBF9F9, 0x00F6F6F6, 0x00C8E0EA, 0x0063B5E5, 0x00758DE7, 0x00BF66E8, 0x00C46DE6, 0x00CF9BE4, 0x00ECE5EF, 0x00F9FAF9, 0x00F8F7F9, 0x20DFAFF2, 0xABBD4DEA, 0xFDB63BE7, 0xFFBC4CE9, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFFBB4BE8, 0xFEB94BE6, 0xBCBC4BE9, 0x30BC4CE9, 0x00BC4CE9, 0x00BC4CE9, 0x00BC4CE9, 0x00BC4CE9, 0x00BC4CE9, 0x00BC4CE9, 0x00BC4CE9, 0x00BC4CE9, 0x00BD4BE9, 
        0x00B053E9, 0x00BBC0F2, 0x00F7F8F7, 0x00F7F6F6, 0x00C8E4EB, 0x0064C1ED, 0x0063A5EE, 0x00BD84EE, 0x00CF7DEE, 0x00CC77EE, 0x00C462EB, 0x00C984E4, 0x00EEE8F0, 0x00F7F9F7, 0x00F0E3F5, 0x13C66AEB, 0x98BA47E8, 0xFBBB4BE8, 0xFFBB4BE8, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFFBA4AE7, 0xFDB94AE6, 0xA5BB4AE8, 0x1ABB4AE8, 0x00BB4BE8, 0x00BB4BE8, 0x00BB4BE8, 0x00BB4BE8, 0x00BB4BE8, 0x00BB4BE8, 0x00BB4BE8, 0x00BB4BE8, 0x00BB4BE8, 0x00BB49E8, 
        0x00C25CE9, 0x00EDDBF2, 0x00F6F6F5, 0x00E4EDEF, 0x0079C9EA, 0x0060AFEF, 0x00AB7CEC, 0x00C562EA, 0x00C465EA, 0x00C972EC, 0x00CD7DED, 0x00C261E9, 0x00D6AAE8, 0x00F4F6F4, 0x00F4F5F4, 0x00D495ED, 0x0DBA48E8, 0x90BB4AE8, 0xFBBA4AE7, 0xFFBA4AE7, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFFB949E6, 0xFEB748E4, 0xA1BA49E7, 0x13BA49E7, 0x00BA4AE7, 0x00BA4AE7, 0x00BA4AE7, 0x00BA4AE7, 0x00BA4AE7, 0x00BA4AE7, 0x00BA4AE7, 0x00BA4AE7, 0x00BA4AE7, 0x00BA4AE7, 0x00B947E7, 
        0x00C771E9, 0x00EFEAF1, 0x00F5F4F2, 0x00B1D5E9, 0x0043A6E5, 0x008878EB, 0x00BA4AE7, 0x00BA49E7, 0x00BA49E7, 0x00BB4CE7, 0x00C364EA, 0x00C86FEB, 0x00C97CE7, 0x00EFECF0, 0x00F3F5F2, 0x00DDB3EE, 0x00BA4AE7, 0x0DBA49E7, 0x95BA49E7, 0xFDB849E5, 
        0xFFB949E6, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFFB848E5, 0xFFB948E6, 0xB4B948E6, 0x17B948E6, 0x00B948E6, 0x00B948E6, 0x00B948E6, 0x00B948E6, 0x00B948E6, 0x00B948E6, 0x00B948E6, 0x00B948E6, 0x00B948E6, 0x00B948E6, 0x00B948E6, 0x00B846E6, 
        0x00C879E8, 0x00EEECEF, 0x00F3F2F0, 0x00A1C3E4, 0x005D78DE, 0x00B24DE7, 0x00BA48E6, 0x00B948E6, 0x00B948E6, 0x00B948E6, 0x00B94AE6, 0x00C364E9, 0x00C671E8, 0x00ECE4EF, 0x00F1F3F0, 0x00DEBBEC, 0x00BA4BE6, 0x00B948E6, 0x12B948E6, 0xAAB948E6, 
        0xFFBA49E7, 0xFFB848E5, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFFB747E4, 0xDBB747E4, 0x2DB847E5, 0x00B847E5, 0x00B847E5, 0x00B847E5, 0x00B847E5, 0x00B847E5, 0x00B847E5, 0x00B847E5, 0x00B847E5, 0x00B847E5, 0x00B847E5, 0x00B847E5, 0x00B847E5, 0x00B745E5, 
        0x00C36FE5, 0x00EAE6EC, 0x00EFF0EE, 0x00CEB7E3, 0x00A04BD1, 0x00B947E5, 0x00B847E5, 0x00B847E5, 0x00B847E5, 0x00B847E5, 0x00B847E5, 0x00BB4FE6, 0x00C878E8, 0x00EBE7ED, 0x00EEF0ED, 0x00D7AFE7, 0x00B848E4, 0x00B847E5, 0x00B847E5, 0x23B847E5, 
        0xCCB747E4, 0xFFB847E5, 0xFFB947E6, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFFB646E3, 0xFCB645E3, 0x6DB746E4, 0x00B746E4, 0x00B746E4, 0x00B746E4, 0x00B746E4, 0x00B746E4, 0x00B746E4, 0x00B746E4, 0x00B746E4, 0x00B746E4, 0x00B746E4, 0x00B746E4, 0x00B746E4, 0x00B746E4, 0x00B745E4, 
        0x00BB59E2, 0x00E1D4E6, 0x00ECEEEB, 0x00E3D5E8, 0x00AB59CA, 0x00AF43DA, 0x00B846E5, 0x00B746E4, 0x00B746E4, 0x00B746E4, 0x00B746E4, 0x00B445E1, 0x00D29FE6, 0x00EBECEB, 0x00EBECEA, 0x00CB90E2, 0x00B644E4, 0x00B746E4, 0x00B746E4, 0x00B746E4, 
        0x4CB746E4, 0xF0B646E3, 0xFFB646E3, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFFB645E3, 0xD2B645E3, 0x1AB645E3, 0x00B645E3, 0x00B645E3, 0x00B645E3, 0x00B645E3, 0x00B645E3, 0x00B645E3, 0x00B645E3, 0x00B645E3, 0x00B645E3, 0x00B645E3, 0x00B645E3, 0x00B645E3, 0x00B645E3, 0x00B645E3, 
        0x00B647E2, 0x00CFA7DF, 0x00E9EBE8, 0x00E9E9E9, 0x00CCA6DC, 0x00A047C4, 0x00AB41D5, 0x00B444E1, 0x00B545E2, 0x00B444E1, 0x00AD41D9, 0x00BB70D9, 0x00E3DAE7, 0x00E9EBE9, 0x00E0D8E4, 0x00BC64E0, 0x00B543E3, 0x00B645E3, 0x00B645E3, 0x00B645E3, 
        0x05B645E3, 0x9CB645E3, 0xFFB645E3, 0xFFB545E2, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFFB644E4, 0xFFB544E2, 0x92B544E2, 0x00B544E2, 0x00B544E2, 0x00B544E2, 0x00B544E2, 0x00B544E2, 0x00B544E2, 0x00B544E2, 0x00B544E2, 0x00B544E2, 0x00B544E2, 0x00B544E2, 0x00B544E2, 0x00B544E2, 0x00B544E2, 0x00B544E2, 
        0x00B442E2, 0x00BB65DD, 0x00DCD3DF, 0x00E7E8E7, 0x00E6E4E7, 0x00CDA9DB, 0x00AA61C7, 0x00A148C4, 0x00A346C8, 0x00A852CA, 0x00BE83D5, 0x00DFD2E4, 0x00E7E8E7, 0x00E4E5E4, 0x00C99ADB, 0x00B546E1, 0x00B544E2, 0x00B544E2, 0x00B544E2, 0x00B544E2, 
        0x00B544E2, 0x3AB544E2, 0xEEB444E1, 0xFFB444E1, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFFB042DC, 0xFFBD46ED, 0x65B443E1, 0x00B443E1, 0x00B443E1, 0x00B443E1, 0x00B443E1, 0x00B443E1, 0x00B443E1, 0x00B443E1, 0x00B443E1, 0x00B443E1, 0x00B443E1, 0x00B443E1, 0x00B443E1, 0x00B443E1, 0x00B443E1, 0x00B443E1, 
        0x00B443E1, 0x00B343E0, 0x00BF80D9, 0x00DCD8DD, 0x00E5E6E4, 0x00E5E6E5, 0x00E0D7E3, 0x00D5BFDE, 0x00D2B8DD, 0x00DACBE1, 0x00E4E2E4, 0x00E5E6E5, 0x00E2E3E2, 0x00D9D3DA, 0x00BE6CDF, 0x00B440E1, 0x00B443E1, 0x00B443E1, 0x00B443E1, 0x00B443E1, 
        0x00B443E1, 0x0BB443E1, 0xBDB443E1, 0xFFB443E1, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFFA23FC9, 0xFD893CA8, 0x59B042DD, 0x00B342E0, 0x00B342E0, 0x00B342E0, 0x00B342E0, 0x00B342E0, 0x00B342E0, 0x00B342E0, 0x00B342E0, 0x00B342E0, 0x00B342E0, 0x00B342E0, 0x00B342E0, 0x00B342E0, 0x00B342E0, 0x00B342E0, 
        0x00B342E0, 0x00B342E0, 0x00B244DF, 0x00BC7BD6, 0x00D3C7D7, 0x00E0E1DF, 0x00E3E5E2, 0x00E4E6E3, 0x00E4E6E3, 0x00E3E5E3, 0x00E2E4E1, 0x00DAD8DB, 0x00D7D3D7, 0x00BFD7E5, 0x006FA3EF, 0x007072EA, 0x00AA48E1, 0x00B441E0, 0x00B342E0, 0x00B342E0, 
        0x00B342E0, 0x00B342E0, 0x92B242DF, 0xFFB342E0, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF973DBB, 0xFFFE4BFF, 0x69A940D4, 0x00B141DE, 0x00B241DF, 0x00B241DF, 0x00B241DF, 0x00B241DF, 0x00B241DF, 0x00B241DF, 0x00B241DF, 0x00B241DF, 0x00B241DF, 0x00B241DF, 0x00B241DF, 0x00B241DF, 0x00B241DF, 0x00B241DF, 
        0x00B241DF, 0x00B241DF, 0x00B241DF, 0x00B140DE, 0x00B559D9, 0x00BF8DD4, 0x00CBB5D4, 0x00D2C7D6, 0x00D3CAD7, 0x00CFBFD5, 0x00C5A2D3, 0x00BA70D6, 0x00B685E2, 0x0050B0F2, 0x0024A5F4, 0x0027A5F4, 0x006479EA, 0x00AE44DF, 0x00B241DF, 0x00B241DF, 
        0x00B241DF, 0x00B141DE, 0x85AD40D8, 0xFFB541E3, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF943CB7, 0xFFA33ECB, 0xA29E3DC5, 0x04AC3FD7, 0x00B140DE, 0x00B140DE, 0x00B140DE, 0x00B140DE, 0x00B140DE, 0x00B140DE, 0x00B140DE, 0x00B140DE, 0x00B140DE, 0x00B140DE, 0x00B140DE, 0x00B140DE, 0x00B140DE, 0x00B140DE, 
        0x00B140DE, 0x00B140DE, 0x00B140DE, 0x00B140DE, 0x00B03EDE, 0x00B03FDD, 0x00B148DB, 0x00B252D9, 0x00B354D8, 0x00B24DDA, 0x00B042DC, 0x00B23DDE, 0x009A4EDF, 0x003198ED, 0x0024A3F1, 0x0025A2F1, 0x0028A0F0, 0x00706DE6, 0x00B040DE, 0x00B140DE, 
        0x00B140DE, 0x02AE3FDA, 0xA1A23ECB, 0xFFA73ED0, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF963BBA, 0xEC933BB6, 0x43A03CC7, 0x00AC3ED8, 0x00B03FDD, 0x00B03FDD, 0x00B03FDD, 0x00B03FDD, 0x00B03FDD, 0x00B03FDD, 0x00B03FDD, 0x00B03FDD, 0x00B03FDD, 0x00B03FDD, 0x00B03FDD, 0x00B03FDD, 0x00B03FDD, 
        0x00B03FDD, 0x00B03FDD, 0x00B03FDD, 0x00B03FDD, 0x00B03FDD, 0x00B03FDD, 0x00B03EDD, 0x00AF3EDD, 0x00AF3DDD, 0x00AF3EDD, 0x00B03FDD, 0x00B03FDD, 0x00AD40DC, 0x00656EE0, 0x00239DEC, 0x00229FEE, 0x00229FEE, 0x002A9AED, 0x007C61E3, 0x00B13EDD, 
        0x00AF3FDB, 0x27A43DCD, 0xDD963BBB, 0xFF983BBD, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF8F3AB2, 0xFF973ABC, 0xCD943AB8, 0x319D3BC4, 0x00A83DD3, 0x00AE3EDB, 0x00AF3EDC, 0x00AF3EDC, 0x00AF3EDC, 0x00AF3EDC, 0x00AF3EDC, 0x00AF3EDC, 0x00AF3EDC, 0x00AF3EDC, 0x00AF3EDC, 0x00AF3EDC, 0x00AF3EDC, 
        0x00AF3EDC, 0x00AF3EDC, 0x00AF3EDC, 0x00AF3EDC, 0x00AF3EDC, 0x00AF3EDC, 0x00AF3EDC, 0x00AF3EDC, 0x00AF3EDC, 0x00AF3EDC, 0x00AF3EDC, 0x00AF3EDC, 0x00AF3DDC, 0x00A742DB, 0x005476DF, 0x001F9CEA, 0x00209CEB, 0x001E9DEB, 0x002E93EA, 0x008657DD, 
        0x13A33BC9, 0xA3973ABC, 0xFFB43EE3, 0xFF913AB4, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF8E39B0, 0xFF983BBD, 0xD8923AB5, 0x61973ABC, 0x129E3BC5, 0x00A53CCE, 0x00A93CD4, 0x00AB3CD7, 0x00AC3CD9, 0x00AD3CD9, 0x00AD3CD9, 0x00AD3CD9, 0x00AD3CD9, 0x00AD3CD9, 0x00AD3CD9, 0x00AD3CD9, 
        0x00AD3CD9, 0x00AD3CD9, 0x00AD3CD9, 0x00AD3CD9, 0x00AD3CD9, 0x00AD3CD9, 0x00AD3CD9, 0x00AD3CD9, 0x00AD3CD9, 0x00AD3CD9, 0x00AD3CD9, 0x00AD3CD9, 0x00AD3DD9, 0x00AE3CD9, 0x009F44D8, 0x00457CDD, 0x001C99E8, 0x001D99E8, 0x001B9AE9, 0x022F8BE2, 
        0x8B6262CC, 0xFEFF0053, 0xFF9239B3, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF603274, 0xFF9039B3, 0xF98E38B0, 0xC99139B5, 0x839439B8, 0x4E9639BB, 0x319839BE, 0x249A39C0, 0x219A39C1, 0x219A39C1, 0x219A39C1, 0x219A39C1, 0x219A39C1, 0x219A39C1, 0x219A39C1, 
        0x219A39C1, 0x219A39C1, 0x219A39C1, 0x219A39C1, 0x219A39C1, 0x219A39C1, 0x219A39C1, 0x219A39C1, 0x219A39C1, 0x219A39C1, 0x219A39C1, 0x219A39C1, 0x219A39C1, 0x219A39C1, 0x219C38C0, 0x2A8048C1, 0x1B278ADB, 0x001997E6, 0x001A96E5, 0x001997E6, 
        0x581898E6, 0xFA1594E0, 0xFF1695E1, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF793296, 0xFFFF6CFF, 0xFA8A37AC, 0xEE8D37B0, 0xE58E37B1, 0xE28E37B1, 0xE28E37B1, 0xE28E37B1, 0xE28E37B1, 0xE28E37B1, 0xE28E37B1, 0xE28E37B1, 
        0xE28E37B1, 0xE28E37B1, 0xE28E37B1, 0xE28E37B1, 0xE28E37B1, 0xE28E37B1, 0xE28E37B1, 0xE28E37B1, 0xE28E37B1, 0xE28E37B1, 0xE28E37B1, 0xE28E37B1, 0xE28E37B1, 0xE28E37B1, 0xE38E38B1, 0xEBA329AC, 0xBF2483CE, 0x221891DD, 0x001794E3, 0x001793E2, 
        0x511890DD, 0xF91B87CC, 0xFF1A8AD2, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF1B7BBA, 0xFF0FAEFF, 0xA81888CF, 0x1A178CD7, 0x2F178BD6, 
        0xC61886CC, 0xFF178CD7, 0xFF1B76B1, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000
};

GUI_CONST_STORAGE GUI_BITMAP bmManualSearch = {
  48, // xSize
  48, // ySize
  192, // BytesPerLine
  32, // BitsPerPixel
  (unsigned char *)_acManualSearch,  // Pointer to picture data
  NULL,  // Pointer to palette
  GUI_DRAW_BMP8888
};

/*************************** End of file ****************************/