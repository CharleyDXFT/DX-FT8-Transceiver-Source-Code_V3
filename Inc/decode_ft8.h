/*
 * decode_ft8.h
 *
 *  Created on: Nov 2, 2019
 *      Author: user
 */

#ifndef DECODE_FT8_H_
#define DECODE_FT8_H_


extern int Station_RSL;
extern int Target_RSL;

typedef enum _Sequence
{
    Seq_RSL = 0,
    Seq_Locator
} Sequence;

typedef struct Decode
{
    char call_to[14]; // call also be 'CQ'
    char call_from[14];
    char locator[7]; // can also be a response 'RR73' etc.
    int freq_hz;
    int sync_score;
    int snr;
    int received_snr;
    char target_locator[7];
    int slot;
    Sequence sequence;
    int calling_CQ;
} Decode;

extern Decode new_decoded[];

typedef struct Called_Stations
{
    char call[14];
    float distance;
    int sync_score;
} Called_Stations;


typedef struct display_message_details
{
    char message[22];
    int text_color;
} display_message_details ;

void process_selected_Station(int num_decoded, int TouchIndex);
void set_QSO_Xmit_Freq(int freq);



int strindex(const char *s, const char *t);



#endif /* DECODE_FT8_H_ */
