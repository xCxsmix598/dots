const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#1b1e25", /* black   */
  [1] = "#50637B", /* red     */
  [2] = "#576F8C", /* green   */
  [3] = "#5D7FA9", /* yellow  */
  [4] = "#607FA6", /* blue    */
  [5] = "#66899C", /* magenta */
  [6] = "#5F81A9", /* cyan    */
  [7] = "#c6c6c8", /* white   */

  /* 8 bright colors */
  [8]  = "#626878",  /* black   */
  [9]  = "#50637B",  /* red     */
  [10] = "#576F8C", /* green   */
  [11] = "#5D7FA9", /* yellow  */
  [12] = "#607FA6", /* blue    */
  [13] = "#66899C", /* magenta */
  [14] = "#5F81A9", /* cyan    */
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
