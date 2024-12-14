// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveToPlayer.h"

#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"

UMoveToPlayer::UMoveToPlayer()
{
	NodeName = "Move to Player";
}

EBTNodeResult::Type UMoveToPlayer::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIController* AIController = OwnerComp.GetAIOwner();
	UBlackboardComponent* Blackboard = OwnerComp.GetBlackboardComponent();
	GEngine->AddOnScreenDebugMessage(0, 5, FColor::Red, "Attemping Move", true);

	if(AIController && Blackboard)
	{
		FVector PlayerLocation = Blackboard->GetValueAsVector("Player");
		AIController->MoveToLocation(PlayerLocation);
		GEngine->AddOnScreenDebugMessage(0, 5, FColor::Red, "Moving", true);

		return EBTNodeResult::Succeeded;
	}
	return EBTNodeResult::Failed;
}