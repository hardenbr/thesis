void dsusy()
{
//=========Macro generated from canvas: x_slice_canvas/x
//=========  (Mon Sep 26 16:07:18 2016) by ROOT version6.02/05
   TCanvas *x_slice_canvas = new TCanvas("x_slice_canvas", "x",211,164,1024,768);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   x_slice_canvas->SetHighLightColor(2);
   x_slice_canvas->Range(-0.7581676,-1.228866,3.991233,4.915463);
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
   x_slice_canvas->SetRightMargin(0.2);
   x_slice_canvas->SetBottomMargin(0.2);
   x_slice_canvas->SetFrameFillStyle(0);
   x_slice_canvas->SetFrameBorderMode(0);
   x_slice_canvas->SetFrameFillStyle(0);
   x_slice_canvas->SetFrameBorderMode(0);
   
   Double_t x_800_exp_graph_fx1[17] = {
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
   1000};
   Double_t x_800_exp_graph_fy1[17] = {
   643.5825,
   113.3162,
   56.40594,
   28.32906,
   19.75469,
   14.58484,
   9.541094,
   8.343203,
   7.628672,
   7.502578,
   7.670703,
   9.036719,
   10.88609,
   12.90359,
   15.08922,
   19.75469,
   27.48844};
   TGraph *graph = new TGraph(17,x_800_exp_graph_fx1,x_800_exp_graph_fy1);
   graph->SetName("x_800_exp_graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc99ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);

   ci = TColor::GetColor("#cc99ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(25);
   graph->SetMarkerSize(1.1);
   
   TH1F *Graph_x_800_exp_graph1 = new TH1F("Graph_x_800_exp_graph1","Graph",100,0.9,1099.9);
   Graph_x_800_exp_graph1->SetMinimum(1);
   Graph_x_800_exp_graph1->SetMaximum(20000);
   Graph_x_800_exp_graph1->SetDirectory(0);
   Graph_x_800_exp_graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_x_800_exp_graph1->SetLineColor(ci);
   Graph_x_800_exp_graph1->GetXaxis()->SetTitle("c#tau_{0} [mm]");
   Graph_x_800_exp_graph1->GetXaxis()->SetLabelFont(42);
   Graph_x_800_exp_graph1->GetXaxis()->SetLabelSize(0.05);
   Graph_x_800_exp_graph1->GetXaxis()->SetTitleSize(0.06);
   Graph_x_800_exp_graph1->GetXaxis()->SetTitleFont(42);
   Graph_x_800_exp_graph1->GetYaxis()->SetTitle("#sigma x Br Upper Limit 95% [fb]");
   Graph_x_800_exp_graph1->GetYaxis()->SetLabelFont(42);
   Graph_x_800_exp_graph1->GetYaxis()->SetLabelSize(0.05);
   Graph_x_800_exp_graph1->GetYaxis()->SetTitleSize(0.06);
   Graph_x_800_exp_graph1->GetYaxis()->SetTitleFont(42);
   Graph_x_800_exp_graph1->GetZaxis()->SetLabelFont(42);
   Graph_x_800_exp_graph1->GetZaxis()->SetLabelSize(0.05);
   Graph_x_800_exp_graph1->GetZaxis()->SetTitleSize(0.06);
   Graph_x_800_exp_graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_x_800_exp_graph1);
   
   graph->Draw("alp");
   
   Double_t x_800_exp_graph_fx2[17] = {
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
   1000};
   Double_t x_800_exp_graph_fy2[17] = {
   643.5825,
   113.3162,
   56.40594,
   28.32906,
   19.75469,
   14.58484,
   9.541094,
   8.343203,
   7.628672,
   7.502578,
   7.670703,
   9.036719,
   10.88609,
   12.90359,
   15.08922,
   19.75469,
   27.48844};
   graph = new TGraph(17,x_800_exp_graph_fx2,x_800_exp_graph_fy2);
   graph->SetName("x_800_exp_graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#cc99ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);

   ci = TColor::GetColor("#cc99ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(25);
   graph->SetMarkerSize(1.1);
   
   TH1F *Graph_Graph_x_800_exp_graph12 = new TH1F("Graph_Graph_x_800_exp_graph12","Graph",100,0.9,1099.9);
   Graph_Graph_x_800_exp_graph12->SetMinimum(1);
   Graph_Graph_x_800_exp_graph12->SetMaximum(20000);
   Graph_Graph_x_800_exp_graph12->SetDirectory(0);
   Graph_Graph_x_800_exp_graph12->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_x_800_exp_graph12->SetLineColor(ci);
   Graph_Graph_x_800_exp_graph12->GetXaxis()->SetTitle("c#tau_{0} [mm]");
   Graph_Graph_x_800_exp_graph12->GetXaxis()->SetLabelFont(42);
   Graph_Graph_x_800_exp_graph12->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_x_800_exp_graph12->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_x_800_exp_graph12->GetXaxis()->SetTitleFont(42);
   Graph_Graph_x_800_exp_graph12->GetYaxis()->SetTitle("#sigma x Br Upper Limit 95% [fb]");
   Graph_Graph_x_800_exp_graph12->GetYaxis()->SetLabelFont(42);
   Graph_Graph_x_800_exp_graph12->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_x_800_exp_graph12->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_x_800_exp_graph12->GetYaxis()->SetTitleFont(42);
   Graph_Graph_x_800_exp_graph12->GetZaxis()->SetLabelFont(42);
   Graph_Graph_x_800_exp_graph12->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_x_800_exp_graph12->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_x_800_exp_graph12->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_x_800_exp_graph12);
   
   graph->Draw("lp");
   
   Double_t x_300_exp_graph_fx3[17] = {
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
   1000};
   Double_t x_300_exp_graph_fy3[17] = {
   1469.412,
   232.0125,
   116.6787,
   60.35688,
   43.20813,
   32.78437,
   24.29406,
   21.77219,
   20.93156,
   21.77219,
   23.78969,
   34.46563,
   46.23438,
   59.34812,
   73.63875,
   104.8259,
   159.3825};
   graph = new TGraph(17,x_300_exp_graph_fx3,x_300_exp_graph_fy3);
   graph->SetName("x_300_exp_graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#000099");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);

   ci = TColor::GetColor("#000099");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(25);
   graph->SetMarkerSize(1.1);
   
   TH1F *Graph_x_300_exp_graph3 = new TH1F("Graph_x_300_exp_graph3","Graph",100,0.9,1099.9);
   Graph_x_300_exp_graph3->SetMinimum(18.83841);
   Graph_x_300_exp_graph3->SetMaximum(1614.261);
   Graph_x_300_exp_graph3->SetDirectory(0);
   Graph_x_300_exp_graph3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_x_300_exp_graph3->SetLineColor(ci);
   Graph_x_300_exp_graph3->GetXaxis()->SetLabelFont(42);
   Graph_x_300_exp_graph3->GetXaxis()->SetLabelSize(0.05);
   Graph_x_300_exp_graph3->GetXaxis()->SetTitleSize(0.06);
   Graph_x_300_exp_graph3->GetXaxis()->SetTitleFont(42);
   Graph_x_300_exp_graph3->GetYaxis()->SetLabelFont(42);
   Graph_x_300_exp_graph3->GetYaxis()->SetLabelSize(0.05);
   Graph_x_300_exp_graph3->GetYaxis()->SetTitleSize(0.06);
   Graph_x_300_exp_graph3->GetYaxis()->SetTitleFont(42);
   Graph_x_300_exp_graph3->GetZaxis()->SetLabelFont(42);
   Graph_x_300_exp_graph3->GetZaxis()->SetLabelSize(0.05);
   Graph_x_300_exp_graph3->GetZaxis()->SetTitleSize(0.06);
   Graph_x_300_exp_graph3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_x_300_exp_graph3);
   
   graph->Draw("lp");
   
   Double_t x_400_exp_graph_fx4[17] = {
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
   1000};
   Double_t x_400_exp_graph_fy4[17] = {
   1024.217,
   169.3439,
   82.88563,
   41.86312,
   29.67406,
   22.10844,
   15.34141,
   13.66016,
   12.90359,
   13.07172,
   13.99641,
   17.73719,
   22.78094,
   28.49719,
   34.63375,
   48.35695,
   72.12562};
   graph = new TGraph(17,x_400_exp_graph_fx4,x_400_exp_graph_fy4);
   graph->SetName("x_400_exp_graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(25);
   graph->SetMarkerSize(1.1);
   
   TH1F *Graph_x_400_exp_graph4 = new TH1F("Graph_x_400_exp_graph4","Graph",100,0.9,1099.9);
   Graph_x_400_exp_graph4->SetMinimum(11.61323);
   Graph_x_400_exp_graph4->SetMaximum(1125.349);
   Graph_x_400_exp_graph4->SetDirectory(0);
   Graph_x_400_exp_graph4->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_x_400_exp_graph4->SetLineColor(ci);
   Graph_x_400_exp_graph4->GetXaxis()->SetLabelFont(42);
   Graph_x_400_exp_graph4->GetXaxis()->SetLabelSize(0.05);
   Graph_x_400_exp_graph4->GetXaxis()->SetTitleSize(0.06);
   Graph_x_400_exp_graph4->GetXaxis()->SetTitleFont(42);
   Graph_x_400_exp_graph4->GetYaxis()->SetLabelFont(42);
   Graph_x_400_exp_graph4->GetYaxis()->SetLabelSize(0.05);
   Graph_x_400_exp_graph4->GetYaxis()->SetTitleSize(0.06);
   Graph_x_400_exp_graph4->GetYaxis()->SetTitleFont(42);
   Graph_x_400_exp_graph4->GetZaxis()->SetLabelFont(42);
   Graph_x_400_exp_graph4->GetZaxis()->SetLabelSize(0.05);
   Graph_x_400_exp_graph4->GetZaxis()->SetTitleSize(0.06);
   Graph_x_400_exp_graph4->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_x_400_exp_graph4);
   
   graph->Draw("lp");
   
   Double_t x_1200_exp_graph_fx5[17] = {
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
   1000};
   Double_t x_1200_exp_graph_fy5[17] = {
   582.7212,
   100.5387,
   49.26062,
   24.46219,
   17.23281,
   12.81953,
   8.40625,
   7.334453,
   6.640937,
   6.493828,
   6.535859,
   7.418516,
   8.7425,
   10.21359,
   11.72672,
   15.00516,
   20.42719};
   graph = new TGraph(17,x_1200_exp_graph_fx5,x_1200_exp_graph_fy5);
   graph->SetName("x_1200_exp_graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#6600cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);

   ci = TColor::GetColor("#6600cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(25);
   graph->SetMarkerSize(1.1);
   
   TH1F *Graph_x_1200_exp_graph5 = new TH1F("Graph_x_1200_exp_graph5","Graph",100,0.9,1099.9);
   Graph_x_1200_exp_graph5->SetMinimum(5.844445);
   Graph_x_1200_exp_graph5->SetMaximum(640.344);
   Graph_x_1200_exp_graph5->SetDirectory(0);
   Graph_x_1200_exp_graph5->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_x_1200_exp_graph5->SetLineColor(ci);
   Graph_x_1200_exp_graph5->GetXaxis()->SetLabelFont(42);
   Graph_x_1200_exp_graph5->GetXaxis()->SetLabelSize(0.05);
   Graph_x_1200_exp_graph5->GetXaxis()->SetTitleSize(0.06);
   Graph_x_1200_exp_graph5->GetXaxis()->SetTitleFont(42);
   Graph_x_1200_exp_graph5->GetYaxis()->SetLabelFont(42);
   Graph_x_1200_exp_graph5->GetYaxis()->SetLabelSize(0.05);
   Graph_x_1200_exp_graph5->GetYaxis()->SetTitleSize(0.06);
   Graph_x_1200_exp_graph5->GetYaxis()->SetTitleFont(42);
   Graph_x_1200_exp_graph5->GetZaxis()->SetLabelFont(42);
   Graph_x_1200_exp_graph5->GetZaxis()->SetLabelSize(0.05);
   Graph_x_1200_exp_graph5->GetZaxis()->SetTitleSize(0.06);
   Graph_x_1200_exp_graph5->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_x_1200_exp_graph5);
   
   graph->Draw("lp");
   
   Double_t x_700_exp_graph_fx6[17] = {
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
   1000};
   Double_t x_700_exp_graph_fy6[17] = {
   612.6475,
   120.0412,
   59.34812,
   29.67406,
   20.76344,
   15.34141,
   10.21359,
   8.868594,
   8.133047,
   8.048984,
   8.259141,
   10.04547,
   12.14703,
   14.50078,
   17.06469,
   22.44469,
   31.18719};
   graph = new TGraph(17,x_700_exp_graph_fx6,x_700_exp_graph_fy6);
   graph->SetName("x_700_exp_graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#9999ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);

   ci = TColor::GetColor("#9999ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(25);
   graph->SetMarkerSize(1.1);
   
   TH1F *Graph_x_700_exp_graph6 = new TH1F("Graph_x_700_exp_graph6","Graph",100,0.9,1099.9);
   Graph_x_700_exp_graph6->SetMinimum(7.244086);
   Graph_x_700_exp_graph6->SetMaximum(673.1074);
   Graph_x_700_exp_graph6->SetDirectory(0);
   Graph_x_700_exp_graph6->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_x_700_exp_graph6->SetLineColor(ci);
   Graph_x_700_exp_graph6->GetXaxis()->SetLabelFont(42);
   Graph_x_700_exp_graph6->GetXaxis()->SetLabelSize(0.05);
   Graph_x_700_exp_graph6->GetXaxis()->SetTitleSize(0.06);
   Graph_x_700_exp_graph6->GetXaxis()->SetTitleFont(42);
   Graph_x_700_exp_graph6->GetYaxis()->SetLabelFont(42);
   Graph_x_700_exp_graph6->GetYaxis()->SetLabelSize(0.05);
   Graph_x_700_exp_graph6->GetYaxis()->SetTitleSize(0.06);
   Graph_x_700_exp_graph6->GetYaxis()->SetTitleFont(42);
   Graph_x_700_exp_graph6->GetZaxis()->SetLabelFont(42);
   Graph_x_700_exp_graph6->GetZaxis()->SetLabelSize(0.05);
   Graph_x_700_exp_graph6->GetZaxis()->SetTitleSize(0.06);
   Graph_x_700_exp_graph6->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_x_700_exp_graph6);
   
   graph->Draw("lp");
   
   Double_t x_1000_exp_graph_fx7[17] = {
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
   1000};
   Double_t x_1000_exp_graph_fy7[17] = {
   611.975,
   107.9363,
   52.62313,
   26.14344,
   18.40969,
   13.57609,
   8.868594,
   7.754766,
   7.06125,
   6.914141,
   7.040234,
   7.964922,
   9.457031,
   11.05422,
   12.81953,
   16.60234,
   22.78094};
   graph = new TGraph(17,x_1000_exp_graph_fx7,x_1000_exp_graph_fy7);
   graph->SetName("x_1000_exp_graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#cc00ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);

   ci = TColor::GetColor("#cc00ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(25);
   graph->SetMarkerSize(1.1);
   
   TH1F *Graph_x_1000_exp_graph7 = new TH1F("Graph_x_1000_exp_graph7","Graph",100,0.9,1099.9);
   Graph_x_1000_exp_graph7->SetMinimum(6.222727);
   Graph_x_1000_exp_graph7->SetMaximum(672.4811);
   Graph_x_1000_exp_graph7->SetDirectory(0);
   Graph_x_1000_exp_graph7->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_x_1000_exp_graph7->SetLineColor(ci);
   Graph_x_1000_exp_graph7->GetXaxis()->SetLabelFont(42);
   Graph_x_1000_exp_graph7->GetXaxis()->SetLabelSize(0.05);
   Graph_x_1000_exp_graph7->GetXaxis()->SetTitleSize(0.06);
   Graph_x_1000_exp_graph7->GetXaxis()->SetTitleFont(42);
   Graph_x_1000_exp_graph7->GetYaxis()->SetLabelFont(42);
   Graph_x_1000_exp_graph7->GetYaxis()->SetLabelSize(0.05);
   Graph_x_1000_exp_graph7->GetYaxis()->SetTitleSize(0.06);
   Graph_x_1000_exp_graph7->GetYaxis()->SetTitleFont(42);
   Graph_x_1000_exp_graph7->GetZaxis()->SetLabelFont(42);
   Graph_x_1000_exp_graph7->GetZaxis()->SetLabelSize(0.05);
   Graph_x_1000_exp_graph7->GetZaxis()->SetTitleSize(0.06);
   Graph_x_1000_exp_graph7->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_x_1000_exp_graph7);
   
   graph->Draw("lp");
   
   Double_t x_900_exp_graph_fx8[17] = {
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
   1000};
   Double_t x_900_exp_graph_fy8[17] = {
   605.9225,
   115.4178,
   55.31312,
   27.15219,
   18.91406,
   13.91234,
   9.288906,
   8.048984,
   7.334453,
   7.208359,
   7.334453,
   8.616406,
   10.38172,
   12.23109,
   13.91234,
   16.51828,
   19.25031};
   graph = new TGraph(17,x_900_exp_graph_fx8,x_900_exp_graph_fy8);
   graph->SetName("x_900_exp_graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#9933cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);

   ci = TColor::GetColor("#9933cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(25);
   graph->SetMarkerSize(1.1);
   
   TH1F *Graph_x_900_exp_graph8 = new TH1F("Graph_x_900_exp_graph8","Graph",100,0.9,1099.9);
   Graph_x_900_exp_graph8->SetMinimum(6.487523);
   Graph_x_900_exp_graph8->SetMaximum(665.7939);
   Graph_x_900_exp_graph8->SetDirectory(0);
   Graph_x_900_exp_graph8->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_x_900_exp_graph8->SetLineColor(ci);
   Graph_x_900_exp_graph8->GetXaxis()->SetLabelFont(42);
   Graph_x_900_exp_graph8->GetXaxis()->SetLabelSize(0.05);
   Graph_x_900_exp_graph8->GetXaxis()->SetTitleSize(0.06);
   Graph_x_900_exp_graph8->GetXaxis()->SetTitleFont(42);
   Graph_x_900_exp_graph8->GetYaxis()->SetLabelFont(42);
   Graph_x_900_exp_graph8->GetYaxis()->SetLabelSize(0.05);
   Graph_x_900_exp_graph8->GetYaxis()->SetTitleSize(0.06);
   Graph_x_900_exp_graph8->GetYaxis()->SetTitleFont(42);
   Graph_x_900_exp_graph8->GetZaxis()->SetLabelFont(42);
   Graph_x_900_exp_graph8->GetZaxis()->SetLabelSize(0.05);
   Graph_x_900_exp_graph8->GetZaxis()->SetTitleSize(0.06);
   Graph_x_900_exp_graph8->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_x_900_exp_graph8);
   
   graph->Draw("lp");
   
   Double_t x_600_exp_graph_fx9[17] = {
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
   1000};
   Double_t x_600_exp_graph_fy9[17] = {
   736.0512,
   137.8625,
   65.73687,
   32.21695,
   22.44469,
   16.51828,
   10.97016,
   9.625156,
   8.868594,
   8.868594,
   9.120781,
   11.13828,
   13.61812,
   16.35016,
   19.33437,
   25.80719,
   36.48313};
   graph = new TGraph(17,x_600_exp_graph_fx9,x_600_exp_graph_fy9);
   graph->SetName("x_600_exp_graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#666699");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);

   ci = TColor::GetColor("#666699");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(25);
   graph->SetMarkerSize(1.1);
   
   TH1F *Graph_x_600_exp_graph9 = new TH1F("Graph_x_600_exp_graph9","Graph",100,0.9,1099.9);
   Graph_x_600_exp_graph9->SetMinimum(7.981734);
   Graph_x_600_exp_graph9->SetMaximum(808.7695);
   Graph_x_600_exp_graph9->SetDirectory(0);
   Graph_x_600_exp_graph9->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_x_600_exp_graph9->SetLineColor(ci);
   Graph_x_600_exp_graph9->GetXaxis()->SetLabelFont(42);
   Graph_x_600_exp_graph9->GetXaxis()->SetLabelSize(0.05);
   Graph_x_600_exp_graph9->GetXaxis()->SetTitleSize(0.06);
   Graph_x_600_exp_graph9->GetXaxis()->SetTitleFont(42);
   Graph_x_600_exp_graph9->GetYaxis()->SetLabelFont(42);
   Graph_x_600_exp_graph9->GetYaxis()->SetLabelSize(0.05);
   Graph_x_600_exp_graph9->GetYaxis()->SetTitleSize(0.06);
   Graph_x_600_exp_graph9->GetYaxis()->SetTitleFont(42);
   Graph_x_600_exp_graph9->GetZaxis()->SetLabelFont(42);
   Graph_x_600_exp_graph9->GetZaxis()->SetLabelSize(0.05);
   Graph_x_600_exp_graph9->GetZaxis()->SetTitleSize(0.06);
   Graph_x_600_exp_graph9->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_x_600_exp_graph9);
   
   graph->Draw("lp");
   
   Double_t Graph0_fx1001[5] = {
   0.1,
   10,
   100,
   1000,
   10000};
   Double_t Graph0_fy1001[5] = {
   28.3338,
   28.3338,
   28.3338,
   28.3338,
   28.3338};
   Double_t Graph0_fex1001[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1001[5] = {
   4.015183,
   4.015183,
   4.015183,
   4.015183,
   4.015183};
   gre = new TGraphErrors(5,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(3002);

   ci = TColor::GetColor("#006600");
   gre->SetLineColor(ci);
   gre->SetLineStyle(9);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","Graph",100,0.09,10999.99);
   Graph_Graph1001->SetMinimum(23.51558);
   Graph_Graph1001->SetMaximum(33.15202);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1001->SetLineColor(ci);
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1001->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1001->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1001->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);
   
   gre->Draw("lp");
   
   Double_t Graph1_fx1002[5] = {
   0.1,
   10,
   100,
   1000,
   10000};
   Double_t Graph1_fy1002[5] = {
   6.15134,
   6.15134,
   6.15134,
   6.15134,
   6.15134};
   Double_t Graph1_fex1002[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1002[5] = {
   1.002379,
   1.002379,
   1.002379,
   1.002379,
   1.002379};
   gre = new TGraphErrors(5,Graph1_fx1002,Graph1_fy1002,Graph1_fex1002,Graph1_fey1002);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(3002);

   ci = TColor::GetColor("#003300");
   gre->SetLineColor(ci);
   gre->SetLineStyle(9);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph1002 = new TH1F("Graph_Graph1002","Graph",100,0.09,10999.99);
   Graph_Graph1002->SetMinimum(4.948485);
   Graph_Graph1002->SetMaximum(7.354195);
   Graph_Graph1002->SetDirectory(0);
   Graph_Graph1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1002->SetLineColor(ci);
   Graph_Graph1002->GetXaxis()->SetLabelFont(42);
   Graph_Graph1002->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1002->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph1002->GetXaxis()->SetTitleFont(42);
   Graph_Graph1002->GetYaxis()->SetLabelFont(42);
   Graph_Graph1002->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1002->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1002->GetYaxis()->SetTitleFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1002->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1002);
   
   gre->Draw("lp");
   
   Double_t Graph2_fx1003[5] = {
   0.1,
   10,
   100,
   1000,
   10000};
   Double_t Graph2_fy1003[5] = {
   174.599,
   174.599,
   174.599,
   174.599,
   174.599};
   Double_t Graph2_fex1003[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fey1003[5] = {
   23.05999,
   23.05999,
   23.05999,
   23.05999,
   23.05999};
   gre = new TGraphErrors(5,Graph2_fx1003,Graph2_fy1003,Graph2_fex1003,Graph2_fey1003);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(3002);

   ci = TColor::GetColor("#009900");
   gre->SetLineColor(ci);
   gre->SetLineStyle(9);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","Graph",100,0.09,10999.99);
   Graph_Graph1003->SetMinimum(146.927);
   Graph_Graph1003->SetMaximum(202.271);
   Graph_Graph1003->SetDirectory(0);
   Graph_Graph1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1003->SetLineColor(ci);
   Graph_Graph1003->GetXaxis()->SetLabelFont(42);
   Graph_Graph1003->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1003->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph1003->GetXaxis()->SetTitleFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1003->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1003->GetYaxis()->SetTitleFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1003->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1003);
   
   gre->Draw("lp");
   
   Double_t Graph3_fx1004[5] = {
   0.1,
   10,
   100,
   1000,
   10000};
   Double_t Graph3_fy1004[5] = {
   8516.15,
   8516.15,
   8516.15,
   8516.15,
   8516.15};
   Double_t Graph3_fex1004[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph3_fey1004[5] = {
   1185.644,
   1185.644,
   1185.644,
   1185.644,
   1185.644};
   gre = new TGraphErrors(5,Graph3_fx1004,Graph3_fy1004,Graph3_fex1004,Graph3_fey1004);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(3002);

   ci = TColor::GetColor("#00ff00");
   gre->SetLineColor(ci);
   gre->SetLineStyle(9);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph1004 = new TH1F("Graph_Graph1004","Graph",100,0.09,10999.99);
   Graph_Graph1004->SetMinimum(7093.377);
   Graph_Graph1004->SetMaximum(9938.923);
   Graph_Graph1004->SetDirectory(0);
   Graph_Graph1004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1004->SetLineColor(ci);
   Graph_Graph1004->GetXaxis()->SetLabelFont(42);
   Graph_Graph1004->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1004->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph1004->GetXaxis()->SetTitleFont(42);
   Graph_Graph1004->GetYaxis()->SetLabelFont(42);
   Graph_Graph1004->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1004->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1004->GetYaxis()->SetTitleFont(42);
   Graph_Graph1004->GetZaxis()->SetLabelFont(42);
   Graph_Graph1004->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1004->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1004);
   
   gre->Draw("lp");
   
   TLegend *leg = new TLegend(0.81,0.45,0.99,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("x_300_exp_graph","m_{#tilde{t}}=300","pl");

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#000099");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("x_400_exp_graph","m_{#tilde{t}}=400","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("x_600_exp_graph","m_{#tilde{t}}=600","pl");

   ci = TColor::GetColor("#666699");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#666699");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("x_700_exp_graph","m_{#tilde{t}}=700","pl");

   ci = TColor::GetColor("#9999ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#9999ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("x_800_exp_graph","m_{#tilde{t}}=800","pl");

   ci = TColor::GetColor("#cc99ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#cc99ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("x_900_exp_graph","m_{#tilde{t}}=900","pl");

   ci = TColor::GetColor("#9933cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#9933cc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("x_1000_exp_graph","m_{#tilde{t}}=1000","pl");

   ci = TColor::GetColor("#cc00ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#cc00ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("x_1200_exp_graph","m_{#tilde{t}}=1200","pl");

   ci = TColor::GetColor("#6600cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#6600cc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","#sigma_{NLO+NLL} #tilde{t}#tilde{t}","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph3","m_{#tilde{t}}=300","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(9);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","m_{#tilde{t}}=600","l");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(9);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph0","m_{#tilde{t}}=800","l");

   ci = TColor::GetColor("#006600");
   entry->SetLineColor(ci);
   entry->SetLineStyle(9);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","m_{#tilde{t}}=1000","l");

   ci = TColor::GetColor("#003300");
   entry->SetLineColor(ci);
   entry->SetLineStyle(9);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.8,0.92,"2.69 fb^{-1} (13 TeV)");
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
      tex = new TLatex(0.17925,0.92,"         Preliminary");
tex->SetNDC();
   tex->SetTextFont(52);
   tex->SetTextSize(0.057);
   tex->SetLineWidth(2);
   tex->Draw();
   x_slice_canvas->Modified();
   x_slice_canvas->cd();
   x_slice_canvas->SetSelected(x_slice_canvas);
}
