#pragma once

namespace Debug
{
	static void Print(const FString& Msg, const FColor& Color = FColor::MakeRandomColor(), int32 Inkey = -1)
	{
		if (GEngine)//check if the engine exists
		{
			GEngine->AddOnScreenDebugMessage(Inkey, 7.f, Color, Msg);//display message on screen for 7 seconds

			UE_LOG(LogTemp, Warning, TEXT("%s"), *Msg);
		}
	}
}