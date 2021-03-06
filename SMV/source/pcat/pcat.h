// $Date$ 
// $Revision$
// $Author$
#ifdef INMAIN
#define EXTERN
#else
#define EXTERN extern
#endif

/* --------------------------  flowlabels ------------------------------------ */

typedef struct {
  char *longlabel, *shortlabel, *unit;
} flowlabels;

char *trim_front(char *line);
void trim(char *line);
int readlabels(flowlabels *flowlabel, FILE *stream);
void trimzeros(char *line);
void getfilesizelabel(int size, char *sizelabel);
void version(void);
int getmaxrevision(void);
int getrevision(char *svn);
void usage(char *prog);
int getfileinfo(char *filename, char *source_dir, int *filesize);
int convert_csv(char *csv_in, char *csv_out);
char *trim_both(char *line);
int handle_key(char *key);
float get_key_val(char *key);


int imax(int a, int b);
void getPCATversion(char *SPRversion);
