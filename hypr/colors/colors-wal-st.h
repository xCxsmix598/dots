const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#1b1e25", /* black   */
  [1] = "#D08971", /* red     */
  [2] = "#5B769A", /* green   */
  [3] = "#967789", /* yellow  */
  [4] = "#5E81AB", /* blue    */
  [5] = "#6C8BAD", /* magenta */
  [6] = "#7CA2C2", /* cyan    */
  [7] = "#c6c6c8", /* white   */

  /* 8 bright colors */
  [8]  = "#626878",  /* black   */
  [9]  = "#D08971",  /* red     */
  [10] = "#5B769A", /* green   */
  [11] = "#967789", /* yellow  */
  [12] = "#5E81AB", /* blue    */
  [13] = "#6C8BAD", /* magenta */
  [14] = "#7CA2C2", /* cyan    */
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
