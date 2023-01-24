#pragma once


class IStrategy
{
	public:
		virtual void doOperation(int num, int num2) = 0;
};