struct String {
    String(const char*);
    String(const String&);
    String& operator=(const String&);
    String(size_t, char);
    ~String();
    void append(String&);

    size_t size;
    char* str;
};
