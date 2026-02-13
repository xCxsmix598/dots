const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#1b1e25", /* black   */
  [1] = "#658185", /* red     */
  [2] = "#688589", /* green   */
  [3] = "#6E8E91", /* yellow  */
  [4] = "#6F8E91", /* blue    */
  [5] = "#7B9FA0", /* magenta */
  [6] = "#7DA2A4", /* cyan    */
  [7] = "#c6c6c8", /* white   */

  /* 8 bright colors */
  [8]  = "#626878",  /* black   */
  [9]  = "#658185",  /* red     */
  [10] = "#688589", /* green   */
  [11] = "#6E8E91", /* yellow  */
  [12] = "#6F8E91", /* blue    */
  [13] = "#7B9FA0", /* magenta */
  [14] = "#7DA2A4", /* cyan    */
  [15] = "#c6c6c8", /* white   */

  /* special colors */
  [256] = "#1b1e25", /* background */
  [257] = "#c6c6c8", /* foreground */
  [258] = "#c6c6c8",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
