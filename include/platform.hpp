class Platform
{
public:
    Platform();
    ~Platform();
    
    bool initialize();
    void finalize();
    void start();
    void stop();
};
