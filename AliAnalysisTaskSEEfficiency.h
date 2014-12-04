#ifndef ALIANALYSISTASKSEEFFICIENCY_H
#define ALIANALYSISTASKSEEFFICIENCY_H

/* $Id$ */

class TString;
class TTree;
class TH1F;
class TF1;
class TH2F;
class TRandom3;
class AliESDEvent;
class TNtuple;
class AliITSPIDResponse;
class THnSparse;//per la vettorizzazione
class AliESDtrackCuts;
class AliPPVsMultUtils;
class AliAnalysisUtils;

#include "AliAnalysisTaskSE.h"

class AliAnalysisTaskSEEfficiency : public AliAnalysisTaskSE {
public:
  AliAnalysisTaskSEEfficiency();
  virtual ~AliAnalysisTaskSEEfficiency();
  
  virtual void UserCreateOutputObjects();
  virtual void Init();
  virtual void LocalInit() {Init();}
  virtual void UserExec(Option_t *);
  virtual void Terminate(Option_t *);

  
 private:

   
  ClassDef(AliAnalysisTaskSEITSsaSpectra, 1);
};

#endif
