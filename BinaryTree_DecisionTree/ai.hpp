#ifndef __AI__
#define __AI__


    class Bot
    {
        public:
            Bot();
            Bot(int, int, bool);
            void PrintBotInfo(); //debug
            Bot& operator=(const Bot &Other);
        private:
            int _x;
            int _y;
            bool _state;
    };

#endif