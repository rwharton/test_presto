#ifndef __zapbirds_cmd__
#define __zapbirds_cmd__
/*****
  command line parser interface -- generated by clig 
  (http://BSDforge.com/projects/devel/clig/)

  The command line parser `clig':
  (C) 1995-2004 Harald Kirsch (clig@geggus.net)
  (C) 2006-2015 Chris Hutchinson (portmaster@BSDforge.com)
*****/

typedef struct s_Cmdline {
  /***** -zap: Zap the birds in the FFT from 'zapfile' (write to the FFT file) */
  char zapP;
  /***** -zapfile: A file of freqs and widths to zap from the FFT (when using '-zap') */
  char zapfileP;
  char* zapfile;
  int zapfileC;
  /***** -in: A file containing a list of freqs (Hz) and the # of harmonics to zap */
  char inzapfileP;
  char* inzapfile;
  int inzapfileC;
  /***** -out: A file to write that will contain the freqs and widths (Hz) zapped */
  char outzapfileP;
  char* outzapfile;
  int outzapfileC;
  /***** -baryv: The radial velocity component (v/c) towards the target during the obs */
  char baryvP;
  double baryv;
  int baryvC;
  /***** uninterpreted command line parameters */
  int argc;
  /*@null*/char **argv;
  /***** the whole command line concatenated */
  char *full_cmd_line;
} Cmdline;


extern char *Program;
extern void usage(void);
extern /*@shared*/Cmdline *parseCmdline(int argc, char **argv);

extern void showOptionValues(void);

#endif

