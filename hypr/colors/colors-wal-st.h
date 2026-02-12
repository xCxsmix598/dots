const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#181b22", /* black   */
  [1] = "#68787E", /* red     */
  [2] = "#537E82", /* green   */
  [3] = "#767D83", /* yellow  */
  [4] = "#7D8288", /* blue    */
  [5] = "#85898E", /* magenta */
  [6] = "#9A9EA2", /* cyan    */
  [7] = "#c5c6c7", /* white   */

  /* 8 bright colors */
  [8]  = "#606676",  /* black   */
  [9]  = "#68787E",  /* red     */
  [10] = "#537E82", /* green   */
  [11] = "#767D83", /* yellow  */
  [12] = "#7D8288", /* blue    */
  [13] = "#85898E", /* magenta */
  [14] = "#9A9EA2", /* cyan    */
  [15] = "#c5c6c7", /* white   */

  /* special colors */
  [256] = "#181b22", /* background */
  [257] = "#c5c6c7", /* foreground */
  [258] = "#c5c6c7",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
