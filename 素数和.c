class TV;
class remoteControl//遥控器的类作为TV的友元
{
private:
    TV* p;
public:
    TV* Remote(TV* P);
    void OF(void);
    void upVolume(void);
    void downVolume(void);
    void upChannel(void);
    void downChannel(void);
    void showTv(void);
    void setChannel(int channel);
};
class TV {
    friend::remoteControl;
private:
    enum{OFF,ON};
    enum{minVolume,maxVolume=10};
    enum { minChannel, maxChannel = 30 };
    int volume;  //音量
    int channel; //频道
    int state;   //开关
public:
    TV()
    {
        state = OFF;
        volume = minVolume;
        channel = minChannel;
    }
    void OF(void);
    void upVolume(void);
    void downVolume(void);
    void upChannel(void);
    void downChannel(void);
    void showTv(void);
};

void TV::OF(void)
{
    state = (state == OFF ? ON : OFF);
}

void TV::upVolume(void)
{
    if (volume == maxVolume)
    {
        cout << "已经为最大音量不需要调节" << endl;
        return;
    }
    volume++;
}

void TV::downVolume(void)
{
    if (volume == minVolume)
    {
        cout << "已经为最小音量不需要调节" << endl;
        return;
    }
    volume--;
}

void TV::upChannel(void)
{
    if (channel == maxChannel)
    {
        channel = minChannel;
    }
    channel++;
}

void TV::downChannel(void)
{
    if (channel == minChannel)
    {
        channel = maxChannel+1;
    }
    channel--;
}
void TV::showTv(void)
{
    cout << "展示当前电视机的音量—>" << volume << endl;
    cout << "展示当前电视机的频道—>" << channel << endl;;
    cout << "展示当前电视机的状态—>" << (state == OFF ? "关" : "开") << endl;
}
int main()
{
    TV tv;
    remoteControl re;
    re.OF();
    re.downChannel();
    re.downVolume();
    re.setChannel(20);
    re.showTv();
    return 0;
}

TV* remoteControl::Remote(TV* P)
{
    p = P;
}

void remoteControl::OF(void)
{
    p->OF();
}

void remoteControl::upVolume(void)
{
    p->upVolume();
}

void remoteControl::downVolume(void)
{
    p->downVolume();
}

void remoteControl::upChannel(void)
{
    p->upChannel();
}

void remoteControl::downChannel(void)
{
    p->downChannel();
}

void remoteControl::showTv(void)
{
    p->showTv();
}

void remoteControl::setChannel(int channel)
{
    if (channel >= TV::minChannel && channel <= TV::maxChannel)
    {
        p->channel = channel;
    }
    else {
        cout << "不在有效范围内" << endl;
    }
}
