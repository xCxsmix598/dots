const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#101c21", /* black   */
  [1] = "#91545F", /* red     */
  [2] = "#A95A66", /* green   */
  [3] = "#BE616B", /* yellow  */
  [4] = "#C15F6C", /* blue    */
  [5] = "#C4656C", /* magenta */
  [6] = "#CF886F", /* cyan    */
  [7] = "#c3c6c7", /* white   */

  /* 8 bright colors */
  [8]  = "#5e6d72",  /* black   */
  [9]  = "#91545F",  /* red     */
  [10] = "#A95A66", /* green   */
  [11] = "#BE616B", /* yellow  */
  [12] = "#C15F6C", /* blue    */
  [13] = "#C4656C", /* magenta */
  [14] = "#CF886F", /* cyan    */
  [15] = "#c3c6c7", /* white   */

  /* special colors */
  [256] = "#101c21", /* background */
  [257] = "#c3c6c7", /* foreground */
  [258] = "#c3c6c7",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
