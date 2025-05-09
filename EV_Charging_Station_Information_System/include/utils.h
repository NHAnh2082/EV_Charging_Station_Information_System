/***************************************************************************
 * @file    utils.h
 * @brief   Declare functions related to utils
 * @details This file contains functions and structure declaration related  
 *          to utils, include logging, time processing, and string processing.
 * @version 1.0
 * @date    2024-12-12
 * @author  Anh Nguyen
 ***************************************************************************/
#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <time.h>
#include <string.h>

/**
 * @brief   logEvent
 * @param   event   Pointer to event that want to write to the log  
 * @return  None
 */
void logEvent(const char *event);

/**
 * @brief   getCurrentTime
 * @param   buffer      Pointer to buffer store current time
 * @param   bufferSize  Buffer size 
 * @return  None
 */
void getCurrentTime(char *buffer, int bufferSize);

/**
 * @brief   delay
 * @param   milliseconds    Delay time
 * @return  None
 */
void delay(int milliseconds);

#endif // UTILS_H
