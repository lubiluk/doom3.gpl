//
//  Emote.h
//  Emote
//
//  Created by Paweł Gajewski on 3/7/12.
//  Copyright (c) 2012 something.pl. All rights reserved.
//

#ifndef Emote_Emote_h
#define Emote_Emote_h

#ifdef __cplusplus
extern "C" {
#endif

    int     Emote_init(void);
    void    Emote_shutdown(void);
    void    Emote_printErrorMessage(void);
    void    Emote_startMonitoring(void);
    void    Emote_stopMonitoring(void);
    int     Emote_getHeartRate(void);
    void    Emote_setHistoryLength(unsigned int);
    int     Emote_getHistory(int index);
    void    Emote_setHistory(int value);
    float   Emote_getStressLevel(void);
    int     Emote_getReferenceHeartRate(void);
    float   Emote_getAverageHeartRate(void);
    void    Emote_calibrate(void);
    
#ifdef __cplusplus
}
#endif

#endif
