//
// Created by Zachary Whitaker on 11/4/2025.
//

#ifndef CHATGPT_RECTANGLE_H
#define CHATGPT_RECTANGLE_H

namespace std {
    class Rectangle {
        public:

        Rectangle();
        Rectangle(float len, float wid);
        ~Rectangle();
        float getArea();
        float getPerimeter();
        void setLength(float len);
        void setWidth(float wid);

        private:
        float mlength;
        float mwidth;
        float marea;
        float mperimeter;
    };
} // std

#endif //CHATGPT_RECTANGLE_H
