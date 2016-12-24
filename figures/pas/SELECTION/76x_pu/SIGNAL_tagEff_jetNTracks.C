void sigEff_1000GeV()
{
//=========Macro generated from canvas: plot/plot
//=========  (Thu Sep 15 17:28:07 2016) by ROOT version6.06/01
   TCanvas *plot = new TCanvas("plot", "plot",40,86,1024,768);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   plot->SetHighLightColor(2);
   plot->Range(-5.6,-0.2844286,31.73333,1.142714);
   plot->SetFillColor(0);
   plot->SetBorderMode(0);
   plot->SetBorderSize(2);
   plot->SetTickx(1);
   plot->SetTicky(1);
   plot->SetLeftMargin(0.15);
   plot->SetBottomMargin(0.2);
   plot->SetFrameFillStyle(0);
   plot->SetFrameBorderMode(0);
   plot->SetFrameFillStyle(0);
   plot->SetFrameBorderMode(0);
   
   Double_t _fx3001[25] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11,
   12,
   13,
   14,
   15,
   16,
   17,
   18,
   19,
   20,
   21,
   22,
   23,
   24,
   25};
   Double_t _fy3001[25] = {
   0.06818182,
   0.01639344,
   0.05555556,
   0.07563025,
   0.07234043,
   0.06317204,
   0.05871212,
   0.05878424,
   0.05555556,
   0.05082285,
   0.05394737,
   0.05444355,
   0.04702194,
   0.04081633,
   0.03482179,
   0.04709376,
   0.04185218,
   0.04291045,
   0.03960933,
   0.03697572,
   0.04383219,
   0.04098361,
   0.04976672,
   0.04695652,
   0.0372093};
   Double_t _felx3001[25] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fely3001[25] = {
   0.03173939,
   0.01186583,
   0.01943373,
   0.01597124,
   0.01135495,
   0.00853769,
   0.00696372,
   0.005888855,
   0.005317549,
   0.004692051,
   0.004605176,
   0.004424757,
   0.00407622,
   0.003840101,
   0.003588504,
   0.004239807,
   0.004094384,
   0.004239672,
   0.004382843,
   0.004269197,
   0.004939185,
   0.004980122,
   0.005838377,
   0.005984579,
   0.005497553};
   Double_t _fehx3001[25] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fehy3001[25] = {
   0.04485298,
   0.02365024,
   0.02495552,
   0.01834979,
   0.01256946,
   0.009321756,
   0.007521829,
   0.006282433,
   0.005657491,
   0.004982421,
   0.004866431,
   0.004662935,
   0.004313284,
   0.004085563,
   0.00384315,
   0.004496459,
   0.004366889,
   0.004524476,
   0.004716643,
   0.00461071,
   0.005320835,
   0.005399145,
   0.006306098,
   0.006511006,
   0.006073322};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#000099");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(4);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,28);
   Graph_Graph3001->SetMinimum(0.001);
   Graph_Graph3001->SetMaximum(1);
   Graph_Graph3001->SetDirectory(0);
   Graph_Graph3001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3001->SetLineColor(ci);
   Graph_Graph3001->GetXaxis()->SetTitle("Jet N Tracks");
   Graph_Graph3001->GetXaxis()->SetLabelFont(42);
   Graph_Graph3001->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3001->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3001->GetXaxis()->SetTitleFont(42);
   Graph_Graph3001->GetYaxis()->SetTitle("Tag Efficiency");
   Graph_Graph3001->GetYaxis()->SetLabelFont(42);
   Graph_Graph3001->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3001->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3001->GetYaxis()->SetTitleFont(42);
   Graph_Graph3001->GetZaxis()->SetLabelFont(42);
   Graph_Graph3001->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3001->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3001);
   
   grae->Draw("ap");
   
   Double_t _fx3002[25] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11,
   12,
   13,
   14,
   15,
   16,
   17,
   18,
   19,
   20,
   21,
   22,
   23,
   24,
   25};
   Double_t _fy3002[25] = {
   0.4495413,
   0.5115207,
   0.5837438,
   0.6638177,
   0.6637255,
   0.665269,
   0.6746075,
   0.657953,
   0.6505728,
   0.6404989,
   0.6223969,
   0.6084615,
   0.5842653,
   0.5766454,
   0.5911392,
   0.547081,
   0.5583596,
   0.5465769,
   0.535184,
   0.5086207,
   0.4979855,
   0.4915888,
   0.4915925,
   0.4853604,
   0.4358289};
   Double_t _felx3002[25] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fely3002[25] = {
   0.04694328,
   0.03383463,
   0.02455751,
   0.01797249,
   0.01489522,
   0.01255137,
   0.01096624,
   0.01003449,
   0.009687919,
   0.00922769,
   0.009644234,
   0.009602687,
   0.009702789,
   0.01020545,
   0.01012647,
   0.01081752,
   0.01140821,
   0.01181138,
   0.01268774,
   0.01340252,
   0.0141898,
   0.01527358,
   0.01571192,
   0.01675262,
   0.01806108};
   Double_t _fehx3002[25] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fehy3002[25] = {
   0.04755128,
   0.03376433,
   0.02428333,
   0.0176617,
   0.01468129,
   0.01239737,
   0.01084016,
   0.009941133,
   0.009605737,
   0.009158925,
   0.009580062,
   0.009547031,
   0.009659436,
   0.01016203,
   0.01007517,
   0.01078795,
   0.01136729,
   0.01177653,
   0.01265744,
   0.01339426,
   0.01419197,
   0.01528405,
   0.015723,
   0.01677459,
   0.01817535};
   grae = new TGraphAsymmErrors(25,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#ff9999");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#ff9999");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(4);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,28);
   Graph_Graph3002->SetMinimum(0.374313);
   Graph_Graph3002->SetMaximum(0.7137326);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3002->SetLineColor(ci);
   Graph_Graph3002->GetXaxis()->SetLabelFont(42);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3002->GetXaxis()->SetTitleFont(42);
   Graph_Graph3002->GetYaxis()->SetLabelFont(42);
   Graph_Graph3002->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3002->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3002->GetYaxis()->SetTitleFont(42);
   Graph_Graph3002->GetZaxis()->SetLabelFont(42);
   Graph_Graph3002->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3002->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3002);
   
   grae->Draw("p");
   
   Double_t _fx3003[25] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11,
   12,
   13,
   14,
   15,
   16,
   17,
   18,
   19,
   20,
   21,
   22,
   23,
   24,
   25};
   Double_t _fy3003[25] = {
   0.2584197,
   0.2744297,
   0.3699674,
   0.4206871,
   0.5134043,
   0.5735835,
   0.6131222,
   0.6360279,
   0.6277093,
   0.6403233,
   0.6245955,
   0.6274024,
   0.5966667,
   0.5881896,
   0.562443,
   0.546875,
   0.5531429,
   0.5131965,
   0.5250464,
   0.4656772,
   0.527907,
   0.4637306,
   0.45,
   0.4432234,
   0.4313725};
   Double_t _felx3003[25] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fely3003[25] = {
   0.007828433,
   0.008185422,
   0.009166069,
   0.009421266,
   0.009584248,
   0.009506848,
   0.009488482,
   0.009786035,
   0.01000423,
   0.01021357,
   0.01129206,
   0.01209176,
   0.01270917,
   0.01376284,
   0.01501198,
   0.01609254,
   0.01683949,
   0.01913646,
   0.02151441,
   0.02141744,
   0.02407735,
   0.02527071,
   0.02763865,
   0.02983797,
   0.03430777};
   Double_t _fehx3003[25] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fehy3003[25] = {
   0.007932803,
   0.008287889,
   0.009228984,
   0.009459947,
   0.009577683,
   0.009470741,
   0.009431577,
   0.009711564,
   0.009931828,
   0.01012951,
   0.01120241,
   0.01198643,
   0.01262324,
   0.01367148,
   0.0149361,
   0.01602747,
   0.01675856,
   0.0191107,
   0.02145258,
   0.02150216,
   0.02399109,
   0.02539558,
   0.02784608,
   0.03011381,
   0.03475299};
   grae = new TGraphAsymmErrors(25,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(4);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,28);
   Graph_Graph3003->SetMinimum(0.2106051);
   Graph_Graph3003->SetMaximum(0.690439);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3003->SetLineColor(ci);
   Graph_Graph3003->GetXaxis()->SetLabelFont(42);
   Graph_Graph3003->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3003->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3003->GetXaxis()->SetTitleFont(42);
   Graph_Graph3003->GetYaxis()->SetLabelFont(42);
   Graph_Graph3003->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3003->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3003->GetYaxis()->SetTitleFont(42);
   Graph_Graph3003->GetZaxis()->SetLabelFont(42);
   Graph_Graph3003->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3003->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3003);
   
   grae->Draw("p");
   
   Double_t _fx3004[25] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11,
   12,
   13,
   14,
   15,
   16,
   17,
   18,
   19,
   20,
   21,
   22,
   23,
   24,
   25};
   Double_t _fy3004[25] = {
   0.1410739,
   0.1488081,
   0.2157928,
   0.3054411,
   0.4136727,
   0.4595672,
   0.5116572,
   0.5273125,
   0.5556426,
   0.5400763,
   0.5753012,
   0.5460123,
   0.5272206,
   0.4813154,
   0.4803571,
   0.4345992,
   0.3909774,
   0.4121037,
   0.3598616,
   0.3181818,
   0.3464912,
   0.2827225,
   0.3333333,
   0.3191489,
   0.3467742};
   Double_t _felx3004[25] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fely3004[25] = {
   0.0045135,
   0.005362736,
   0.007297548,
   0.009300276,
   0.01097436,
   0.0118783,
   0.01255272,
   0.01348578,
   0.01393753,
   0.01541608,
   0.01570728,
   0.01746741,
   0.01890829,
   0.01928259,
   0.02106514,
   0.02264374,
   0.0242034,
   0.02619731,
   0.02783566,
   0.02934727,
   0.03095709,
   0.03170029,
   0.03754108,
   0.03817838,
   0.04162942};
   Double_t _fehx3004[25] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fehy3004[25] = {
   0.004595423,
   0.005471208,
   0.007418792,
   0.009407264,
   0.01103181,
   0.011909,
   0.01254294,
   0.01345925,
   0.01387939,
   0.01536511,
   0.01560653,
   0.01739221,
   0.01885637,
   0.01931978,
   0.02111181,
   0.02282725,
   0.02456657,
   0.02653374,
   0.02847915,
   0.03034329,
   0.03184916,
   0.03320597,
   0.03900763,
   0.03987027,
   0.04325634};
   grae = new TGraphAsymmErrors(25,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#990000");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#990000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(4);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,28);
   Graph_Graph3004->SetMinimum(0.09112564);
   Graph_Graph3004->SetMaximum(0.6363425);
   Graph_Graph3004->SetDirectory(0);
   Graph_Graph3004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3004->SetLineColor(ci);
   Graph_Graph3004->GetXaxis()->SetLabelFont(42);
   Graph_Graph3004->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3004->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3004->GetXaxis()->SetTitleFont(42);
   Graph_Graph3004->GetYaxis()->SetLabelFont(42);
   Graph_Graph3004->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3004->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3004->GetYaxis()->SetTitleFont(42);
   Graph_Graph3004->GetZaxis()->SetLabelFont(42);
   Graph_Graph3004->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3004->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3004);
   
   grae->Draw("p");
   
   Double_t _fx3005[25] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11,
   12,
   13,
   14,
   15,
   16,
   17,
   18,
   19,
   20,
   21,
   22,
   23,
   24,
   25};
   Double_t _fy3005[25] = {
   0.1219512,
   0.1428571,
   0.2391304,
   0.266129,
   0.2683438,
   0.2714819,
   0.2476273,
   0.2555184,
   0.2284182,
   0.2258802,
   0.2113537,
   0.2068558,
   0.1979892,
   0.2036364,
   0.1781585,
   0.1727589,
   0.1793578,
   0.1838454,
   0.1782025,
   0.1584949,
   0.1712011,
   0.183834,
   0.1511722,
   0.1554227,
   0.1491318};
   Double_t _felx3005[25] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fely3005[25] = {
   0.0446364,
   0.04003141,
   0.03486878,
   0.02735675,
   0.01994069,
   0.01549723,
   0.01253239,
   0.01117192,
   0.009626003,
   0.008860495,
   0.00845005,
   0.007965823,
   0.007760895,
   0.008017434,
   0.0078295,
   0.007793852,
   0.008121467,
   0.008520888,
   0.008588965,
   0.008592779,
   0.009559796,
   0.01021035,
   0.009998719,
   0.0103928,
   0.01114654};
   Double_t _fehx3005[25] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fehy3005[25] = {
   0.05666841,
   0.04746524,
   0.03736418,
   0.02860753,
   0.02058685,
   0.01587638,
   0.0128227,
   0.01139001,
   0.009820256,
   0.009027711,
   0.008618219,
   0.008119934,
   0.007916726,
   0.008177202,
   0.008013411,
   0.007983855,
   0.008317712,
   0.00872991,
   0.008810724,
   0.008852525,
   0.009850821,
   0.01051198,
   0.01037483,
   0.01078523,
   0.01162443};
   grae = new TGraphAsymmErrors(25,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(4);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,28);
   Graph_Graph3005->SetMinimum(0.05557265);
   Graph_Graph3005->SetMaximum(0.3164787);
   Graph_Graph3005->SetDirectory(0);
   Graph_Graph3005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3005->SetLineColor(ci);
   Graph_Graph3005->GetXaxis()->SetLabelFont(42);
   Graph_Graph3005->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3005->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3005->GetXaxis()->SetTitleFont(42);
   Graph_Graph3005->GetYaxis()->SetLabelFont(42);
   Graph_Graph3005->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3005->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3005->GetYaxis()->SetTitleFont(42);
   Graph_Graph3005->GetZaxis()->SetLabelFont(42);
   Graph_Graph3005->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3005->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3005);
   
   grae->Draw("p");
   
   TLegend *leg = new TLegend(0.6819961,0.6037736,0.87182,0.8665768,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry(""," 1mm ","pl");

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#000099");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(4);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry(""," 3mm ","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(4);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry(""," 30mm ","pl");

   ci = TColor::GetColor("#ff9999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff9999");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(4);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry(""," 300mm ","pl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(4);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry(""," 1000mm ","pl");

   ci = TColor::GetColor("#990000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#990000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(4);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.9,0.92,"(13 TeV)");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.06);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.92,"CMS");
tex->SetNDC();
   tex->SetTextFont(61);
   tex->SetTextSize(0.075);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.18375,0.92,"         Preliminary");
tex->SetNDC();
   tex->SetTextFont(52);
   tex->SetTextSize(0.057);
   tex->SetLineWidth(2);
   tex->Draw();
   plot->Modified();
   plot->cd();
   plot->SetSelected(plot);
}
