// capi_js.cc

EM_PORT_API(int) js_add(int a, int b);
EM_PORT_API(void) js_console_log_int(int param);

EM_PORT_API(void) print_the_anwser() {
    int i = js_add(21, 21);
    js_console_log_int(i);
}
