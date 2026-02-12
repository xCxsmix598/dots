const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#1b1e25", /* black   */
  [1] = "#738C90", /* red     */
  [2] = "#7DA2A4", /* green   */
  [3] = "#96A5A8", /* yellow  */
  [4] = "#8FBBBA", /* blue    */
  [5] = "#95C0BF", /* magenta */
  [6] = "#A8BFC0", /* cyan    */
  [7] = "#c6c6c8", /* white   */

  /* 8 bright colors */
  [8]  = "#626878",  /* black   */
  [9]  = "#738C90",  /* red     */
  [10] = "#7DA2A4", /* green   */
  [11] = "#96A5A8", /* yellow  */
  [12] = "#8FBBBA", /* blue    */
  [13] = "#95C0BF", /* magenta */
  [14] = "#A8BFC0", /* cyan    */
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
