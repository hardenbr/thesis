void Light-Light()
{
//=========Macro generated from canvas: x_slice_canvas/x
//=========  (Thu Nov 10 16:46:28 2016) by ROOT version6.02/05
   TCanvas *x_slice_canvas = new TCanvas("x_slice_canvas", "x",20,43,1024,768);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   x_slice_canvas->SetHighLightColor(2);
   x_slice_canvas->Range(-0.8789117,-1.443887,4.67545,4.270399);
   x_slice_canvas->SetFillColor(0);
   x_slice_canvas->SetBorderMode(0);
   x_slice_canvas->SetBorderSize(2);
   x_slice_canvas->SetLogx();
   x_slice_canvas->SetLogy();
   x_slice_canvas->SetGridx();
   x_slice_canvas->SetGridy();
   x_slice_canvas->SetTickx(1);
   x_slice_canvas->SetTicky(1);
   x_slice_canvas->SetLeftMargin(0.15);
   x_slice_canvas->SetRightMargin(0.24);
   x_slice_canvas->SetBottomMargin(0.2);
   x_slice_canvas->SetFrameFillStyle(0);
   x_slice_canvas->SetFrameBorderMode(0);
   x_slice_canvas->SetFrameFillStyle(0);
   x_slice_canvas->SetFrameBorderMode(0);
   
   Double_t x_100_obs_graph_fx1[19] = {
   1,
   2,
   3,
   5,
   7,
   10,
   20,
   30,
   50,
   70,
   100,
   200,
   300,
   300,
   400,
   500,
   700,
   1000,
   2000};
   Double_t x_100_obs_graph_fy1[19] = {
   653.8177,
   136.3617,
   77.35041,
   44.24193,
   36.1774,
   31.23201,
   27.41103,
   29.68275,
   36.31434,
   41.12291,
   49.49842,
   89.47308,
   135.3138,
   135.3138,
   167.4242,
   224.5291,
   355.6521,
   582.678,
   1463.764};
   TGraph *graph = new TGraph(19,x_100_obs_graph_fx1,x_100_obs_graph_fy1);
   graph->SetName("x_100_obs_graph");
   graph->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#666699");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#666699");
   graph->SetLineColor(ci);
   graph->SetLineWidth(4);

   ci = TColor::GetColor("#666699");
   graph->SetMarkerColor(ci);
   
   TH1F *Graph_x_100_obs_graph1 = new TH1F("Graph_x_100_obs_graph1","Graph",100,0.9,2199.9);
   Graph_x_100_obs_graph1->SetMinimum(0.5);
   Graph_x_100_obs_graph1->SetMaximum(5000);
   Graph_x_100_obs_graph1->SetDirectory(0);
   Graph_x_100_obs_graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_x_100_obs_graph1->SetLineColor(ci);
   Graph_x_100_obs_graph1->GetXaxis()->SetTitle("c#tau_{0} [mm]");
   Graph_x_100_obs_graph1->GetXaxis()->SetLabelFont(42);
   Graph_x_100_obs_graph1->GetXaxis()->SetLabelSize(0.05);
   Graph_x_100_obs_graph1->GetXaxis()->SetTitleSize(0.06);
   Graph_x_100_obs_graph1->GetXaxis()->SetTitleFont(42);
   Graph_x_100_obs_graph1->GetYaxis()->SetTitle("#sigma x BR^{2} Upper Limit 95% [fb]");
   Graph_x_100_obs_graph1->GetYaxis()->SetLabelFont(42);
   Graph_x_100_obs_graph1->GetYaxis()->SetLabelSize(0.05);
   Graph_x_100_obs_graph1->GetYaxis()->SetTitleSize(0.06);
   Graph_x_100_obs_graph1->GetYaxis()->SetTitleFont(42);
   Graph_x_100_obs_graph1->GetZaxis()->SetLabelFont(42);
   Graph_x_100_obs_graph1->GetZaxis()->SetLabelSize(0.05);
   Graph_x_100_obs_graph1->GetZaxis()->SetTitleSize(0.06);
   Graph_x_100_obs_graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_x_100_obs_graph1);
   
   graph->Draw("alp");
   
   Double_t x_50_obs_graph_fx2[12] = {
   2,
   3,
   5,
   7,
   10,
   20,
   30,
   50,
   70,
   100,
   200,
   300};
   Double_t x_50_obs_graph_fy2[12] = {
   1443.535,
   963.1626,
   457.2992,
   380.8867,
   365.5326,
   332.7346,
   370.6745,
   632.4823,
   734.6173,
   947.9893,
   1041.208,
   1600.39};
   graph = new TGraph(12,x_50_obs_graph_fx2,x_50_obs_graph_fy2);
   graph->SetName("x_50_obs_graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#000099");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   graph->SetLineColor(ci);
   graph->SetLineWidth(4);

   ci = TColor::GetColor("#000099");
   graph->SetMarkerColor(ci);
   
   TH1F *Graph_x_50_obs_graph2 = new TH1F("Graph_x_50_obs_graph2","Graph",100,1.8,329.8);
   Graph_x_50_obs_graph2->SetMinimum(205.9691);
   Graph_x_50_obs_graph2->SetMaximum(1727.155);
   Graph_x_50_obs_graph2->SetDirectory(0);
   Graph_x_50_obs_graph2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_x_50_obs_graph2->SetLineColor(ci);
   Graph_x_50_obs_graph2->GetXaxis()->SetLabelFont(42);
   Graph_x_50_obs_graph2->GetXaxis()->SetLabelSize(0.05);
   Graph_x_50_obs_graph2->GetXaxis()->SetTitleSize(0.06);
   Graph_x_50_obs_graph2->GetXaxis()->SetTitleFont(42);
   Graph_x_50_obs_graph2->GetYaxis()->SetLabelFont(42);
   Graph_x_50_obs_graph2->GetYaxis()->SetLabelSize(0.05);
   Graph_x_50_obs_graph2->GetYaxis()->SetTitleSize(0.06);
   Graph_x_50_obs_graph2->GetYaxis()->SetTitleFont(42);
   Graph_x_50_obs_graph2->GetZaxis()->SetLabelFont(42);
   Graph_x_50_obs_graph2->GetZaxis()->SetLabelSize(0.05);
   Graph_x_50_obs_graph2->GetZaxis()->SetTitleSize(0.06);
   Graph_x_50_obs_graph2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_x_50_obs_graph2);
   
   graph->Draw("lp");
   
   Double_t x_1000_expUp_graph_fx3[18] = {
   1,
   2,
   3,
   5,
   7,
   10,
   20,
   30,
   50,
   70,
   100,
   200,
   300,
   400,
   500,
   700,
   1000,
   2000};
   Double_t x_1000_expUp_graph_fy3[18] = {
   61.31218,
   14.4432,
   8.155193,
   4.8627,
   3.844063,
   3.144963,
   2.504442,
   2.374173,
   2.352458,
   2.431105,
   2.569608,
   3.257927,
   3.941028,
   4.65481,
   5.361438,
   6.837183,
   9.060742,
   17.41636};
   graph = new TGraph(18,x_1000_expUp_graph_fx3,x_1000_expUp_graph_fy3);
   graph->SetName("x_1000_expUp_graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#9933cc");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#9933cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#9933cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerSize(1.1);
   
   TH1F *Graph_x_1000_expUp_graph3 = new TH1F("Graph_x_1000_expUp_graph3","Graph",100,0.9,2199.9);
   Graph_x_1000_expUp_graph3->SetMinimum(2.117212);
   Graph_x_1000_expUp_graph3->SetMaximum(67.20815);
   Graph_x_1000_expUp_graph3->SetDirectory(0);
   Graph_x_1000_expUp_graph3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_x_1000_expUp_graph3->SetLineColor(ci);
   Graph_x_1000_expUp_graph3->GetXaxis()->SetLabelFont(42);
   Graph_x_1000_expUp_graph3->GetXaxis()->SetLabelSize(0.05);
   Graph_x_1000_expUp_graph3->GetXaxis()->SetTitleSize(0.06);
   Graph_x_1000_expUp_graph3->GetXaxis()->SetTitleFont(42);
   Graph_x_1000_expUp_graph3->GetYaxis()->SetLabelFont(42);
   Graph_x_1000_expUp_graph3->GetYaxis()->SetLabelSize(0.05);
   Graph_x_1000_expUp_graph3->GetYaxis()->SetTitleSize(0.06);
   Graph_x_1000_expUp_graph3->GetYaxis()->SetTitleFont(42);
   Graph_x_1000_expUp_graph3->GetZaxis()->SetLabelFont(42);
   Graph_x_1000_expUp_graph3->GetZaxis()->SetLabelSize(0.05);
   Graph_x_1000_expUp_graph3->GetZaxis()->SetTitleSize(0.06);
   Graph_x_1000_expUp_graph3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_x_1000_expUp_graph3);
   
   graph->Draw("lp");
   
   Double_t x_300_exp_graph_fx4[18] = {
   1,
   2,
   3,
   5,
   7,
   10,
   20,
   30,
   50,
   70,
   100,
   200,
   300,
   400,
   500,
   700,
   1000,
   2000};
   Double_t x_300_exp_graph_fy4[18] = {
   69.8125,
   13.98828,
   7.65625,
   4.578125,
   3.578125,
   2.960938,
   2.414062,
   2.367188,
   2.460938,
   2.632812,
   2.960938,
   4.109375,
   5.546875,
   7.21875,
   8.84375,
   12.21875,
   17.6875,
   49.375};
   graph = new TGraph(18,x_300_exp_graph_fx4,x_300_exp_graph_fy4);
   graph->SetName("x_300_exp_graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#9999ff");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#9999ff");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(4);

   ci = TColor::GetColor("#9999ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerSize(1.1);
   
   TH1F *Graph_x_300_exp_graph4 = new TH1F("Graph_x_300_exp_graph4","Graph",100,0.9,2199.9);
   Graph_x_300_exp_graph4->SetMinimum(2.130469);
   Graph_x_300_exp_graph4->SetMaximum(76.55703);
   Graph_x_300_exp_graph4->SetDirectory(0);
   Graph_x_300_exp_graph4->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_x_300_exp_graph4->SetLineColor(ci);
   Graph_x_300_exp_graph4->GetXaxis()->SetLabelFont(42);
   Graph_x_300_exp_graph4->GetXaxis()->SetLabelSize(0.05);
   Graph_x_300_exp_graph4->GetXaxis()->SetTitleSize(0.06);
   Graph_x_300_exp_graph4->GetXaxis()->SetTitleFont(42);
   Graph_x_300_exp_graph4->GetYaxis()->SetLabelFont(42);
   Graph_x_300_exp_graph4->GetYaxis()->SetLabelSize(0.05);
   Graph_x_300_exp_graph4->GetYaxis()->SetTitleSize(0.06);
   Graph_x_300_exp_graph4->GetYaxis()->SetTitleFont(42);
   Graph_x_300_exp_graph4->GetZaxis()->SetLabelFont(42);
   Graph_x_300_exp_graph4->GetZaxis()->SetLabelSize(0.05);
   Graph_x_300_exp_graph4->GetZaxis()->SetTitleSize(0.06);
   Graph_x_300_exp_graph4->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_x_300_exp_graph4);
   
   graph->Draw("lp");
   
   Double_t x_100_obs_graph_fx5[19] = {
   1,
   2,
   3,
   5,
   7,
   10,
   20,
   30,
   50,
   70,
   100,
   200,
   300,
   300,
   400,
   500,
   700,
   1000,
   2000};
   Double_t x_100_obs_graph_fy5[19] = {
   653.8177,
   136.3617,
   77.35041,
   44.24193,
   36.1774,
   31.23201,
   27.41103,
   29.68275,
   36.31434,
   41.12291,
   49.49842,
   89.47308,
   135.3138,
   135.3138,
   167.4242,
   224.5291,
   355.6521,
   582.678,
   1463.764};
   graph = new TGraph(19,x_100_obs_graph_fx5,x_100_obs_graph_fy5);
   graph->SetName("x_100_obs_graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#666699");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#666699");
   graph->SetLineColor(ci);
   graph->SetLineWidth(4);

   ci = TColor::GetColor("#666699");
   graph->SetMarkerColor(ci);
   
   TH1F *Graph_Graph_x_100_obs_graph15 = new TH1F("Graph_Graph_x_100_obs_graph15","Graph",100,0.9,2199.9);
   Graph_Graph_x_100_obs_graph15->SetMinimum(0.5);
   Graph_Graph_x_100_obs_graph15->SetMaximum(5000);
   Graph_Graph_x_100_obs_graph15->SetDirectory(0);
   Graph_Graph_x_100_obs_graph15->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_x_100_obs_graph15->SetLineColor(ci);
   Graph_Graph_x_100_obs_graph15->GetXaxis()->SetTitle("c#tau_{0} [mm]");
   Graph_Graph_x_100_obs_graph15->GetXaxis()->SetLabelFont(42);
   Graph_Graph_x_100_obs_graph15->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_x_100_obs_graph15->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_x_100_obs_graph15->GetXaxis()->SetTitleFont(42);
   Graph_Graph_x_100_obs_graph15->GetYaxis()->SetTitle("#sigma x BR^{2} Upper Limit 95% [fb]");
   Graph_Graph_x_100_obs_graph15->GetYaxis()->SetLabelFont(42);
   Graph_Graph_x_100_obs_graph15->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_x_100_obs_graph15->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_x_100_obs_graph15->GetYaxis()->SetTitleFont(42);
   Graph_Graph_x_100_obs_graph15->GetZaxis()->SetLabelFont(42);
   Graph_Graph_x_100_obs_graph15->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_x_100_obs_graph15->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_x_100_obs_graph15->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_x_100_obs_graph15);
   
   graph->Draw("lp");
   
   Double_t x_100_expUp_graph_fx6[19] = {
   1,
   2,
   3,
   5,
   7,
   10,
   20,
   30,
   50,
   70,
   100,
   200,
   300,
   300,
   400,
   500,
   700,
   1000,
   2000};
   Double_t x_100_expUp_graph_fy6[19] = {
   1288.773,
   247.3468,
   136.4407,
   78.50842,
   64.27338,
   55.9426,
   48.52856,
   52.62652,
   65.08498,
   73.11636,
   87.78277,
   158.6884,
   240.9173,
   240.9173,
   292.3528,
   388.3707,
   615.2698,
   1006.996,
   2675.455};
   graph = new TGraph(19,x_100_expUp_graph_fx6,x_100_expUp_graph_fy6);
   graph->SetName("x_100_expUp_graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#666699");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#666699");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#666699");
   graph->SetMarkerColor(ci);
   graph->SetMarkerSize(1.1);
   
   TH1F *Graph_x_100_expUp_graph6 = new TH1F("Graph_x_100_expUp_graph6","Graph",100,0.9,2199.9);
   Graph_x_100_expUp_graph6->SetMinimum(43.6757);
   Graph_x_100_expUp_graph6->SetMaximum(2938.147);
   Graph_x_100_expUp_graph6->SetDirectory(0);
   Graph_x_100_expUp_graph6->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_x_100_expUp_graph6->SetLineColor(ci);
   Graph_x_100_expUp_graph6->GetXaxis()->SetLabelFont(42);
   Graph_x_100_expUp_graph6->GetXaxis()->SetLabelSize(0.05);
   Graph_x_100_expUp_graph6->GetXaxis()->SetTitleSize(0.06);
   Graph_x_100_expUp_graph6->GetXaxis()->SetTitleFont(42);
   Graph_x_100_expUp_graph6->GetYaxis()->SetLabelFont(42);
   Graph_x_100_expUp_graph6->GetYaxis()->SetLabelSize(0.05);
   Graph_x_100_expUp_graph6->GetYaxis()->SetTitleSize(0.06);
   Graph_x_100_expUp_graph6->GetYaxis()->SetTitleFont(42);
   Graph_x_100_expUp_graph6->GetZaxis()->SetLabelFont(42);
   Graph_x_100_expUp_graph6->GetZaxis()->SetLabelSize(0.05);
   Graph_x_100_expUp_graph6->GetZaxis()->SetTitleSize(0.06);
   Graph_x_100_expUp_graph6->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_x_100_expUp_graph6);
   
   graph->Draw("lp");
   
   Double_t x_300_obs_graph_fx7[18] = {
   1,
   2,
   3,
   5,
   7,
   10,
   20,
   30,
   50,
   70,
   100,
   200,
   300,
   400,
   500,
   700,
   1000,
   2000};
   Double_t x_300_obs_graph_fy7[18] = {
   67.56997,
   13.55361,
   7.461202,
   4.444423,
   3.495526,
   2.88957,
   2.36686,
   2.308308,
   2.398754,
   2.575343,
   2.884161,
   4.005681,
   5.383774,
   7.029001,
   8.604011,
   11.89177,
   17.20667,
   48.14047};
   graph = new TGraph(18,x_300_obs_graph_fx7,x_300_obs_graph_fy7);
   graph->SetName("x_300_obs_graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#9999ff");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#9999ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(4);

   ci = TColor::GetColor("#9999ff");
   graph->SetMarkerColor(ci);
   
   TH1F *Graph_x_300_obs_graph7 = new TH1F("Graph_x_300_obs_graph7","Graph",100,0.9,2199.9);
   Graph_x_300_obs_graph7->SetMinimum(2.077477);
   Graph_x_300_obs_graph7->SetMaximum(74.09613);
   Graph_x_300_obs_graph7->SetDirectory(0);
   Graph_x_300_obs_graph7->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_x_300_obs_graph7->SetLineColor(ci);
   Graph_x_300_obs_graph7->GetXaxis()->SetLabelFont(42);
   Graph_x_300_obs_graph7->GetXaxis()->SetLabelSize(0.05);
   Graph_x_300_obs_graph7->GetXaxis()->SetTitleSize(0.06);
   Graph_x_300_obs_graph7->GetXaxis()->SetTitleFont(42);
   Graph_x_300_obs_graph7->GetYaxis()->SetLabelFont(42);
   Graph_x_300_obs_graph7->GetYaxis()->SetLabelSize(0.05);
   Graph_x_300_obs_graph7->GetYaxis()->SetTitleSize(0.06);
   Graph_x_300_obs_graph7->GetYaxis()->SetTitleFont(42);
   Graph_x_300_obs_graph7->GetZaxis()->SetLabelFont(42);
   Graph_x_300_obs_graph7->GetZaxis()->SetLabelSize(0.05);
   Graph_x_300_obs_graph7->GetZaxis()->SetTitleSize(0.06);
   Graph_x_300_obs_graph7->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_x_300_obs_graph7);
   
   graph->Draw("lp");
   
   Double_t x_300_expUp_graph_fx8[18] = {
   1,
   2,
   3,
   5,
   7,
   10,
   20,
   30,
   50,
   70,
   100,
   200,
   300,
   400,
   500,
   700,
   1000,
   2000};
   Double_t x_300_expUp_graph_fy8[18] = {
   124.9111,
   24.58228,
   13.4547,
   7.972365,
   6.288011,
   5.203398,
   4.280838,
   4.197715,
   4.363962,
   4.668746,
   5.203398,
   7.156082,
   9.57091,
   12.45566,
   15.25953,
   20.88814,
   29.95505,
   83.62009};
   graph = new TGraph(18,x_300_expUp_graph_fx8,x_300_expUp_graph_fy8);
   graph->SetName("x_300_expUp_graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#9999ff");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#9999ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#9999ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerSize(1.1);
   
   TH1F *Graph_x_300_expUp_graph8 = new TH1F("Graph_x_300_expUp_graph8","Graph",100,0.9,2199.9);
   Graph_x_300_expUp_graph8->SetMinimum(3.777944);
   Graph_x_300_expUp_graph8->SetMaximum(136.9824);
   Graph_x_300_expUp_graph8->SetDirectory(0);
   Graph_x_300_expUp_graph8->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_x_300_expUp_graph8->SetLineColor(ci);
   Graph_x_300_expUp_graph8->GetXaxis()->SetLabelFont(42);
   Graph_x_300_expUp_graph8->GetXaxis()->SetLabelSize(0.05);
   Graph_x_300_expUp_graph8->GetXaxis()->SetTitleSize(0.06);
   Graph_x_300_expUp_graph8->GetXaxis()->SetTitleFont(42);
   Graph_x_300_expUp_graph8->GetYaxis()->SetLabelFont(42);
   Graph_x_300_expUp_graph8->GetYaxis()->SetLabelSize(0.05);
   Graph_x_300_expUp_graph8->GetYaxis()->SetTitleSize(0.06);
   Graph_x_300_expUp_graph8->GetYaxis()->SetTitleFont(42);
   Graph_x_300_expUp_graph8->GetZaxis()->SetLabelFont(42);
   Graph_x_300_expUp_graph8->GetZaxis()->SetLabelSize(0.05);
   Graph_x_300_expUp_graph8->GetZaxis()->SetTitleSize(0.06);
   Graph_x_300_expUp_graph8->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_x_300_expUp_graph8);
   
   graph->Draw("lp");
   
   Double_t x_50_expDn_graph_fx9[12] = {
   2,
   3,
   5,
   7,
   10,
   20,
   30,
   50,
   70,
   100,
   200,
   300};
   Double_t x_50_expDn_graph_fy9[12] = {
   888.7426,
   575.6278,
   282.2819,
   236.2669,
   224.1781,
   208.6067,
   232.4279,
   381.4326,
   448.8018,
   581.3784,
   638.0466,
   990.7751};
   graph = new TGraph(12,x_50_expDn_graph_fx9,x_50_expDn_graph_fy9);
   graph->SetName("x_50_expDn_graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#000099");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#000099");
   graph->SetMarkerColor(ci);
   graph->SetMarkerSize(1.1);
   
   TH1F *Graph_x_50_expDn_graph9 = new TH1F("Graph_x_50_expDn_graph9","Graph",100,1.8,329.8);
   Graph_x_50_expDn_graph9->SetMinimum(130.3899);
   Graph_x_50_expDn_graph9->SetMaximum(1068.992);
   Graph_x_50_expDn_graph9->SetDirectory(0);
   Graph_x_50_expDn_graph9->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_x_50_expDn_graph9->SetLineColor(ci);
   Graph_x_50_expDn_graph9->GetXaxis()->SetLabelFont(42);
   Graph_x_50_expDn_graph9->GetXaxis()->SetLabelSize(0.05);
   Graph_x_50_expDn_graph9->GetXaxis()->SetTitleSize(0.06);
   Graph_x_50_expDn_graph9->GetXaxis()->SetTitleFont(42);
   Graph_x_50_expDn_graph9->GetYaxis()->SetLabelFont(42);
   Graph_x_50_expDn_graph9->GetYaxis()->SetLabelSize(0.05);
   Graph_x_50_expDn_graph9->GetYaxis()->SetTitleSize(0.06);
   Graph_x_50_expDn_graph9->GetYaxis()->SetTitleFont(42);
   Graph_x_50_expDn_graph9->GetZaxis()->SetLabelFont(42);
   Graph_x_50_expDn_graph9->GetZaxis()->SetLabelSize(0.05);
   Graph_x_50_expDn_graph9->GetZaxis()->SetTitleSize(0.06);
   Graph_x_50_expDn_graph9->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_x_50_expDn_graph9);
   
   graph->Draw("lp");
   
   Double_t x_100_exp_graph_fx10[19] = {
   1,
   2,
   3,
   5,
   7,
   10,
   20,
   30,
   50,
   70,
   100,
   200,
   300,
   300,
   400,
   500,
   700,
   1000,
   2000};
   Double_t x_100_exp_graph_fy10[19] = {
   678,
   140.75,
   79.8125,
   45.5,
   37.25,
   32.125,
   28.125,
   30.5,
   37.375,
   42.375,
   50.875,
   91.96875,
   139.625,
   139.625,
   172.625,
   231.5,
   366.75,
   600.25,
   1508.75};
   graph = new TGraph(19,x_100_exp_graph_fx10,x_100_exp_graph_fy10);
   graph->SetName("x_100_exp_graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#666699");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#666699");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(4);

   ci = TColor::GetColor("#666699");
   graph->SetMarkerColor(ci);
   graph->SetMarkerSize(1.1);
   
   TH1F *Graph_x_100_exp_graph10 = new TH1F("Graph_x_100_exp_graph10","Graph",100,0.9,2199.9);
   Graph_x_100_exp_graph10->SetMinimum(25.3125);
   Graph_x_100_exp_graph10->SetMaximum(1656.812);
   Graph_x_100_exp_graph10->SetDirectory(0);
   Graph_x_100_exp_graph10->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_x_100_exp_graph10->SetLineColor(ci);
   Graph_x_100_exp_graph10->GetXaxis()->SetLabelFont(42);
   Graph_x_100_exp_graph10->GetXaxis()->SetLabelSize(0.05);
   Graph_x_100_exp_graph10->GetXaxis()->SetTitleSize(0.06);
   Graph_x_100_exp_graph10->GetXaxis()->SetTitleFont(42);
   Graph_x_100_exp_graph10->GetYaxis()->SetLabelFont(42);
   Graph_x_100_exp_graph10->GetYaxis()->SetLabelSize(0.05);
   Graph_x_100_exp_graph10->GetYaxis()->SetTitleSize(0.06);
   Graph_x_100_exp_graph10->GetYaxis()->SetTitleFont(42);
   Graph_x_100_exp_graph10->GetZaxis()->SetLabelFont(42);
   Graph_x_100_exp_graph10->GetZaxis()->SetLabelSize(0.05);
   Graph_x_100_exp_graph10->GetZaxis()->SetTitleSize(0.06);
   Graph_x_100_exp_graph10->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_x_100_exp_graph10);
   
   graph->Draw("lp");
   
   Double_t x_50_exp_graph_fx11[12] = {
   2,
   3,
   5,
   7,
   10,
   20,
   30,
   50,
   70,
   100,
   200,
   300};
   Double_t x_50_exp_graph_fy11[12] = {
   1488.5,
   991.5,
   471.25,
   392.875,
   377.5,
   342.625,
   381.75,
   651.5,
   754.5,
   974.25,
   1071.5,
   1644.5};
   graph = new TGraph(12,x_50_exp_graph_fx11,x_50_exp_graph_fy11);
   graph->SetName("x_50_exp_graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#000099");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(4);

   ci = TColor::GetColor("#000099");
   graph->SetMarkerColor(ci);
   graph->SetMarkerSize(1.1);
   
   TH1F *Graph_x_50_exp_graph11 = new TH1F("Graph_x_50_exp_graph11","Graph",100,1.8,329.8);
   Graph_x_50_exp_graph11->SetMinimum(212.4375);
   Graph_x_50_exp_graph11->SetMaximum(1774.688);
   Graph_x_50_exp_graph11->SetDirectory(0);
   Graph_x_50_exp_graph11->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_x_50_exp_graph11->SetLineColor(ci);
   Graph_x_50_exp_graph11->GetXaxis()->SetLabelFont(42);
   Graph_x_50_exp_graph11->GetXaxis()->SetLabelSize(0.05);
   Graph_x_50_exp_graph11->GetXaxis()->SetTitleSize(0.06);
   Graph_x_50_exp_graph11->GetXaxis()->SetTitleFont(42);
   Graph_x_50_exp_graph11->GetYaxis()->SetLabelFont(42);
   Graph_x_50_exp_graph11->GetYaxis()->SetLabelSize(0.05);
   Graph_x_50_exp_graph11->GetYaxis()->SetTitleSize(0.06);
   Graph_x_50_exp_graph11->GetYaxis()->SetTitleFont(42);
   Graph_x_50_exp_graph11->GetZaxis()->SetLabelFont(42);
   Graph_x_50_exp_graph11->GetZaxis()->SetLabelSize(0.05);
   Graph_x_50_exp_graph11->GetZaxis()->SetTitleSize(0.06);
   Graph_x_50_exp_graph11->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_x_50_exp_graph11);
   
   graph->Draw("lp");
   
   Double_t x_1000_expDn_graph_fx12[18] = {
   1,
   2,
   3,
   5,
   7,
   10,
   20,
   30,
   50,
   70,
   100,
   200,
   300,
   400,
   500,
   700,
   1000,
   2000};
   Double_t x_1000_expDn_graph_fy12[18] = {
   19.39805,
   4.80122,
   2.68403,
   1.5595,
   1.209365,
   0.973946,
   0.7434486,
   0.694535,
   0.68487,
   0.7025769,
   0.749898,
   0.9694359,
   1.205604,
   1.461076,
   1.709703,
   2.222657,
   3.035328,
   5.959087};
   graph = new TGraph(18,x_1000_expDn_graph_fx12,x_1000_expDn_graph_fy12);
   graph->SetName("x_1000_expDn_graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#9933cc");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#9933cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#9933cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerSize(1.1);
   
   TH1F *Graph_x_1000_expDn_graph12 = new TH1F("Graph_x_1000_expDn_graph12","Graph",100,0.9,2199.9);
   Graph_x_1000_expDn_graph12->SetMinimum(0.616383);
   Graph_x_1000_expDn_graph12->SetMaximum(21.26937);
   Graph_x_1000_expDn_graph12->SetDirectory(0);
   Graph_x_1000_expDn_graph12->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_x_1000_expDn_graph12->SetLineColor(ci);
   Graph_x_1000_expDn_graph12->GetXaxis()->SetLabelFont(42);
   Graph_x_1000_expDn_graph12->GetXaxis()->SetLabelSize(0.05);
   Graph_x_1000_expDn_graph12->GetXaxis()->SetTitleSize(0.06);
   Graph_x_1000_expDn_graph12->GetXaxis()->SetTitleFont(42);
   Graph_x_1000_expDn_graph12->GetYaxis()->SetLabelFont(42);
   Graph_x_1000_expDn_graph12->GetYaxis()->SetLabelSize(0.05);
   Graph_x_1000_expDn_graph12->GetYaxis()->SetTitleSize(0.06);
   Graph_x_1000_expDn_graph12->GetYaxis()->SetTitleFont(42);
   Graph_x_1000_expDn_graph12->GetZaxis()->SetLabelFont(42);
   Graph_x_1000_expDn_graph12->GetZaxis()->SetLabelSize(0.05);
   Graph_x_1000_expDn_graph12->GetZaxis()->SetTitleSize(0.06);
   Graph_x_1000_expDn_graph12->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_x_1000_expDn_graph12);
   
   graph->Draw("lp");
   
   Double_t x_100_expDn_graph_fx13[19] = {
   1,
   2,
   3,
   5,
   7,
   10,
   20,
   30,
   50,
   70,
   100,
   200,
   300,
   300,
   400,
   500,
   700,
   1000,
   2000};
   Double_t x_100_expDn_graph_fy13[19] = {
   391.1902,
   83.85649,
   48.39035,
   27.12949,
   22.22873,
   19.08856,
   16.72969,
   18.12299,
   22.09332,
   24.97313,
   30.29456,
   55.01341,
   83.63631,
   83.63631,
   105.1025,
   140.9484,
   224.2298,
   368.5205,
   898.8879};
   graph = new TGraph(19,x_100_expDn_graph_fx13,x_100_expDn_graph_fy13);
   graph->SetName("x_100_expDn_graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#666699");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#666699");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#666699");
   graph->SetMarkerColor(ci);
   graph->SetMarkerSize(1.1);
   
   TH1F *Graph_x_100_expDn_graph13 = new TH1F("Graph_x_100_expDn_graph13","Graph",100,0.9,2199.9);
   Graph_x_100_expDn_graph13->SetMinimum(15.05672);
   Graph_x_100_expDn_graph13->SetMaximum(987.1038);
   Graph_x_100_expDn_graph13->SetDirectory(0);
   Graph_x_100_expDn_graph13->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_x_100_expDn_graph13->SetLineColor(ci);
   Graph_x_100_expDn_graph13->GetXaxis()->SetLabelFont(42);
   Graph_x_100_expDn_graph13->GetXaxis()->SetLabelSize(0.05);
   Graph_x_100_expDn_graph13->GetXaxis()->SetTitleSize(0.06);
   Graph_x_100_expDn_graph13->GetXaxis()->SetTitleFont(42);
   Graph_x_100_expDn_graph13->GetYaxis()->SetLabelFont(42);
   Graph_x_100_expDn_graph13->GetYaxis()->SetLabelSize(0.05);
   Graph_x_100_expDn_graph13->GetYaxis()->SetTitleSize(0.06);
   Graph_x_100_expDn_graph13->GetYaxis()->SetTitleFont(42);
   Graph_x_100_expDn_graph13->GetZaxis()->SetLabelFont(42);
   Graph_x_100_expDn_graph13->GetZaxis()->SetLabelSize(0.05);
   Graph_x_100_expDn_graph13->GetZaxis()->SetTitleSize(0.06);
   Graph_x_100_expDn_graph13->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_x_100_expDn_graph13);
   
   graph->Draw("lp");
   
   Double_t x_1000_obs_graph_fx14[18] = {
   1,
   2,
   3,
   5,
   7,
   10,
   20,
   30,
   50,
   70,
   100,
   200,
   300,
   400,
   500,
   700,
   1000,
   2000};
   Double_t x_1000_obs_graph_fy14[18] = {
   32.47807,
   7.95685,
   4.507608,
   2.669901,
   2.091446,
   1.711332,
   1.340232,
   1.26032,
   1.249236,
   1.283362,
   1.363901,
   1.749114,
   2.125059,
   2.551461,
   2.954838,
   3.793645,
   5.076298,
   9.788072};
   graph = new TGraph(18,x_1000_obs_graph_fx14,x_1000_obs_graph_fy14);
   graph->SetName("x_1000_obs_graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#9933cc");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#9933cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(4);

   ci = TColor::GetColor("#9933cc");
   graph->SetMarkerColor(ci);
   
   TH1F *Graph_x_1000_obs_graph14 = new TH1F("Graph_x_1000_obs_graph14","Graph",100,0.9,2199.9);
   Graph_x_1000_obs_graph14->SetMinimum(1.124312);
   Graph_x_1000_obs_graph14->SetMaximum(35.60095);
   Graph_x_1000_obs_graph14->SetDirectory(0);
   Graph_x_1000_obs_graph14->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_x_1000_obs_graph14->SetLineColor(ci);
   Graph_x_1000_obs_graph14->GetXaxis()->SetLabelFont(42);
   Graph_x_1000_obs_graph14->GetXaxis()->SetLabelSize(0.05);
   Graph_x_1000_obs_graph14->GetXaxis()->SetTitleSize(0.06);
   Graph_x_1000_obs_graph14->GetXaxis()->SetTitleFont(42);
   Graph_x_1000_obs_graph14->GetYaxis()->SetLabelFont(42);
   Graph_x_1000_obs_graph14->GetYaxis()->SetLabelSize(0.05);
   Graph_x_1000_obs_graph14->GetYaxis()->SetTitleSize(0.06);
   Graph_x_1000_obs_graph14->GetYaxis()->SetTitleFont(42);
   Graph_x_1000_obs_graph14->GetZaxis()->SetLabelFont(42);
   Graph_x_1000_obs_graph14->GetZaxis()->SetLabelSize(0.05);
   Graph_x_1000_obs_graph14->GetZaxis()->SetTitleSize(0.06);
   Graph_x_1000_obs_graph14->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_x_1000_obs_graph14);
   
   graph->Draw("lp");
   
   Double_t x_1000_exp_graph_fx15[18] = {
   1,
   2,
   3,
   5,
   7,
   10,
   20,
   30,
   50,
   70,
   100,
   200,
   300,
   400,
   500,
   700,
   1000,
   2000};
   Double_t x_1000_exp_graph_fy15[18] = {
   33.375,
   8.21875,
   4.640625,
   2.742188,
   2.148438,
   1.742188,
   1.363281,
   1.28125,
   1.269531,
   1.300781,
   1.386719,
   1.773438,
   2.164062,
   2.601562,
   3.023438,
   3.890625,
   5.203125,
   10.09375};
   graph = new TGraph(18,x_1000_exp_graph_fx15,x_1000_exp_graph_fy15);
   graph->SetName("x_1000_exp_graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#9933cc");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#9933cc");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(4);

   ci = TColor::GetColor("#9933cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerSize(1.1);
   
   TH1F *Graph_x_1000_exp_graph15 = new TH1F("Graph_x_1000_exp_graph15","Graph",100,0.9,2199.9);
   Graph_x_1000_exp_graph15->SetMinimum(1.142578);
   Graph_x_1000_exp_graph15->SetMaximum(36.58555);
   Graph_x_1000_exp_graph15->SetDirectory(0);
   Graph_x_1000_exp_graph15->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_x_1000_exp_graph15->SetLineColor(ci);
   Graph_x_1000_exp_graph15->GetXaxis()->SetLabelFont(42);
   Graph_x_1000_exp_graph15->GetXaxis()->SetLabelSize(0.05);
   Graph_x_1000_exp_graph15->GetXaxis()->SetTitleSize(0.06);
   Graph_x_1000_exp_graph15->GetXaxis()->SetTitleFont(42);
   Graph_x_1000_exp_graph15->GetYaxis()->SetLabelFont(42);
   Graph_x_1000_exp_graph15->GetYaxis()->SetLabelSize(0.05);
   Graph_x_1000_exp_graph15->GetYaxis()->SetTitleSize(0.06);
   Graph_x_1000_exp_graph15->GetYaxis()->SetTitleFont(42);
   Graph_x_1000_exp_graph15->GetZaxis()->SetLabelFont(42);
   Graph_x_1000_exp_graph15->GetZaxis()->SetLabelSize(0.05);
   Graph_x_1000_exp_graph15->GetZaxis()->SetTitleSize(0.06);
   Graph_x_1000_exp_graph15->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_x_1000_exp_graph15);
   
   graph->Draw("lp");
   
   Double_t x_300_expDn_graph_fx16[18] = {
   1,
   2,
   3,
   5,
   7,
   10,
   20,
   30,
   50,
   70,
   100,
   200,
   300,
   400,
   500,
   700,
   1000,
   2000};
   Double_t x_300_expDn_graph_fy16[18] = {
   41.16808,
   8.297912,
   4.554193,
   2.691576,
   2.103314,
   1.710629,
   1.376006,
   1.340131,
   1.396378,
   1.497298,
   1.687722,
   2.387019,
   3.260596,
   4.261762,
   5.254924,
   7.322608,
   10.67887,
   29.81026};
   graph = new TGraph(18,x_300_expDn_graph_fx16,x_300_expDn_graph_fy16);
   graph->SetName("x_300_expDn_graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#9999ff");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#9999ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#9999ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerSize(1.1);
   
   TH1F *Graph_x_300_expDn_graph16 = new TH1F("Graph_x_300_expDn_graph16","Graph",100,0.9,2199.9);
   Graph_x_300_expDn_graph16->SetMinimum(1.206118);
   Graph_x_300_expDn_graph16->SetMaximum(45.15087);
   Graph_x_300_expDn_graph16->SetDirectory(0);
   Graph_x_300_expDn_graph16->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_x_300_expDn_graph16->SetLineColor(ci);
   Graph_x_300_expDn_graph16->GetXaxis()->SetLabelFont(42);
   Graph_x_300_expDn_graph16->GetXaxis()->SetLabelSize(0.05);
   Graph_x_300_expDn_graph16->GetXaxis()->SetTitleSize(0.06);
   Graph_x_300_expDn_graph16->GetXaxis()->SetTitleFont(42);
   Graph_x_300_expDn_graph16->GetYaxis()->SetLabelFont(42);
   Graph_x_300_expDn_graph16->GetYaxis()->SetLabelSize(0.05);
   Graph_x_300_expDn_graph16->GetYaxis()->SetTitleSize(0.06);
   Graph_x_300_expDn_graph16->GetYaxis()->SetTitleFont(42);
   Graph_x_300_expDn_graph16->GetZaxis()->SetLabelFont(42);
   Graph_x_300_expDn_graph16->GetZaxis()->SetLabelSize(0.05);
   Graph_x_300_expDn_graph16->GetZaxis()->SetTitleSize(0.06);
   Graph_x_300_expDn_graph16->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_x_300_expDn_graph16);
   
   graph->Draw("lp");
   
   Double_t x_50_expUp_graph_fx17[12] = {
   2,
   3,
   5,
   7,
   10,
   20,
   30,
   50,
   70,
   100,
   200,
   300};
   Double_t x_50_expUp_graph_fy17[12] = {
   2592.08,
   1805.645,
   820.6366,
   677.89,
   663.3989,
   580.2599,
   646.5209,
   1134.525,
   1301.859,
   1665.496,
   1865.914,
   2811.298};
   graph = new TGraph(12,x_50_expUp_graph_fx17,x_50_expUp_graph_fy17);
   graph->SetName("x_50_expUp_graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#000099");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#000099");
   graph->SetMarkerColor(ci);
   graph->SetMarkerSize(1.1);
   
   TH1F *Graph_x_50_expUp_graph17 = new TH1F("Graph_x_50_expUp_graph17","Graph",100,1.8,329.8);
   Graph_x_50_expUp_graph17->SetMinimum(357.1561);
   Graph_x_50_expUp_graph17->SetMaximum(3034.402);
   Graph_x_50_expUp_graph17->SetDirectory(0);
   Graph_x_50_expUp_graph17->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_x_50_expUp_graph17->SetLineColor(ci);
   Graph_x_50_expUp_graph17->GetXaxis()->SetLabelFont(42);
   Graph_x_50_expUp_graph17->GetXaxis()->SetLabelSize(0.05);
   Graph_x_50_expUp_graph17->GetXaxis()->SetTitleSize(0.06);
   Graph_x_50_expUp_graph17->GetXaxis()->SetTitleFont(42);
   Graph_x_50_expUp_graph17->GetYaxis()->SetLabelFont(42);
   Graph_x_50_expUp_graph17->GetYaxis()->SetLabelSize(0.05);
   Graph_x_50_expUp_graph17->GetYaxis()->SetTitleSize(0.06);
   Graph_x_50_expUp_graph17->GetYaxis()->SetTitleFont(42);
   Graph_x_50_expUp_graph17->GetZaxis()->SetLabelFont(42);
   Graph_x_50_expUp_graph17->GetZaxis()->SetLabelSize(0.05);
   Graph_x_50_expUp_graph17->GetZaxis()->SetTitleSize(0.06);
   Graph_x_50_expUp_graph17->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_x_50_expUp_graph17);
   
   graph->Draw("lp");
   
   TLegend *leg = new TLegend(0.7739726,0.5410498,0.9843444,0.9044415,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph","Exp. Limit #pm 1 #sigma_{exp}","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","Obs. Limit","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("x_50_expUp_graph","m_{X^{0}}=50 GeV","f");

   ci = TColor::GetColor("#000099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("x_100_expUp_graph","m_{X^{0}}=100 GeV","f");

   ci = TColor::GetColor("#666699");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#666699");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("x_300_expUp_graph","m_{X^{0}}=300 GeV","f");

   ci = TColor::GetColor("#9999ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#9999ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("x_1000_expUp_graph","m_{X^{0}}=1000 GeV","f");

   ci = TColor::GetColor("#9933cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#9933cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.76,0.92,"2.69 fb^{-1} (13 TeV)");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.055);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.92,"CMS");
tex->SetNDC();
   tex->SetTextFont(61);
   tex->SetTextSize(0.07);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.17745,0.92,"         Preliminary");
tex->SetNDC();
   tex->SetTextFont(52);
   tex->SetTextSize(0.0532);
   tex->SetLineWidth(2);
   tex->Draw();
   TLine *line = new TLine(0.7825,0.872,0.8195,0.872);
   line->SetLineStyle(7);
   line->SetLineWidth(4);
   line->Draw();
   line = new TLine(0.7825,0.8899,0.8195,0.8899);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.7825,0.8541,0.8195,0.8541);
   line->SetLineWidth(2);
   line->Draw();
      tex = new TLatex(0.175,0.235,"Light-Light");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.065);
   tex->SetLineWidth(2);
   tex->Draw();
   x_slice_canvas->Modified();
   x_slice_canvas->cd();
   x_slice_canvas->SetSelected(x_slice_canvas);
}
