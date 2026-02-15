const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#191c24", /* black   */
  [1] = "#3E5A81", /* red     */
  [2] = "#5B7192", /* green   */
  [3] = "#6C8DAE", /* yellow  */
  [4] = "#7AABC4", /* blue    */
  [5] = "#B08482", /* magenta */
  [6] = "#9B96AC", /* cyan    */
  [7] = "#c5c6c8", /* white   */

  /* 8 bright colors */
  [8]  = "#616777",  /* black   */
  [9]  = "#3E5A81",  /* red     */
  [10] = "#5B7192", /* green   */
  [11] = "#6C8DAE", /* yellow  */
  [12] = "#7AABC4", /* blue    */
  [13] = "#B08482", /* magenta */
  [14] = "#9B96AC", /* cyan    */
  [15] = "#c5c6c8", /* white   */

  /* special colors */
  [256] = "#191c24", /* background */
  [257] = "#c5c6c8", /* foreground */
  [258] = "#c5c6c8",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
