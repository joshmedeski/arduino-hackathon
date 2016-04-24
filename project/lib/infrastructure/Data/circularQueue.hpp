#ifndef CIRCLEQUEUE
#define CIRCLEQUEUE

#include "Arduino.h"

template <class T> class CircularQueue
{
  public:
    CircularQueue<T>(int size)
    {
      max = size;
      queue = new T[max];
      front =-1;
      rear =-1;
    };

    CircularQueue<T>()
    {
      max = 10;
      queue = new T[max];
      front =-1;
      rear =-1;
    }; // default size = 10;

    bool HasItems()
    {
      return (front != rear);
    };

    bool Enque(T item)
    {
      if(front ==-1)
      {
        front=0;
        rear=0;
        EnqueAlgorithm(item);
        return true;
      }
      else if(SizeLimitReached())
      {
        return false;
      }
      else{
        EnqueAlgorithm(item);
        return true;
      }
    };

    T Deque()
    {
      if(HasItems())
      {
        IncrementFront();
        return queue[front];
      }

      return T();
    };

    void Clear()
    {
      front =-1;
      rear =-1;
    };

  private:
    bool SizeLimitReached()
    {
      if(rear==front)
        return true;

      return false;
    };

    void EnqueAlgorithm(T item)
    {
      queue[rear] = item;
      IncrementRear();
    };

    void IncrementFront()
    {
      front++;
      if(front == max)
        front = 0;
    };

    void IncrementRear()
    {
      rear++;
      if(rear == max)
        rear = 0;
    };

    int max;
    T* queue;
    int front;
    int rear;
};

#endif
