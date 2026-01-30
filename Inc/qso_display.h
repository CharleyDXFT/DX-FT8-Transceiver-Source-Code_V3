/* APIs for displaying QSO related information */
#ifndef QSO_DISPLAY_H_
#define QSO_DISPLAY_H_
#include <stdbool.h>

#define MAX_LINE_LEN    22 // 21 characters + null

// Forward declaraion
//typedef struct Decode Decode;

extern   int max_sync_score;
extern   int max_sync_score_index;
extern   int auto_called;
extern   int auto_logged;
extern   int Valid_CQ_Candidate;
extern 	 int log_display_flag;

void display_messages(Decode new_decoded[], int num_decoded);
void display_queued_message(const char*);
void display_txing_message(const char*);
void display_qso_state(const char *txt);
void display_logged_messages(void);

// Return a char buffer to caller for filling in the log string
// The buffer can hold up to 18 chars + null (MAX_LINE_LEN - 3)
char *add_worked_qso();
// Return false when last page has been displayed
bool display_worked_qsos();


int check_call_list(int message_index);
int check_log_list(int message_index);
void store_CQ_Call(void);
void store_logged_CQ_Call(const char *call);
void clear_auto_memories(void);
void update_message_log_display(int mode);
void display_log_list(int number_calls);



#endif
