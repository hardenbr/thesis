void Jet-Jet()
{
//=========Macro generated from canvas: x_slice_canvas/x
//=========  (Thu Nov 10 15:49:44 2016) by ROOT version6.06/01
   TCanvas *x_slice_canvas = new TCanvas("x_slice_canvas", "x",0,23,1024,768);
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
   
   Double_t x_1000_expUp_graph_fx1[18] = {
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
   Double_t x_1000_expUp_graph_fy1[18] = {
   65.38976,
   14.77271,
   8.340015,
   4.906422,
   3.87202,
   3.201375,
   2.540322,
   2.403126,
   2.387301,
   2.445706,
   2.584085,
   3.257927,
   3.93473,
   4.598897,
   5.325774,
   6.788384,
   8.951905,
   17.41636};
   TGraph *graph = new TGraph(18,x_1000_expUp_graph_fx1,x_1000_expUp_graph_fy1);
   graph->SetName("x_1000_expUp_graph");
   graph->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933cc");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#9933cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#9933cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerSize(1.1);
   
   TH1F *Graph_x_1000_expUp_graph1 = new TH1F("Graph_x_1000_expUp_graph1","Graph",100,0.9,2199.9);
   Graph_x_1000_expUp_graph1->SetMinimum(0.5);
   Graph_x_1000_expUp_graph1->SetMaximum(5000);
   Graph_x_1000_expUp_graph1->SetDirectory(0);
   Graph_x_1000_expUp_graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_x_1000_expUp_graph1->SetLineColor(ci);
   Graph_x_1000_expUp_graph1->GetXaxis()->SetTitle("c#tau_{0} [mm]");
   Graph_x_1000_expUp_graph1->GetXaxis()->SetLabelFont(42);
   Graph_x_1000_expUp_graph1->GetXaxis()->SetLabelSize(0.05);
   Graph_x_1000_expUp_graph1->GetXaxis()->SetTitleSize(0.06);
   Graph_x_1000_expUp_graph1->GetXaxis()->SetTitleFont(42);
   Graph_x_1000_expUp_graph1->GetYaxis()->SetTitle("#sigma x BR^{2} Upper Limit 95% [fb]");
   Graph_x_1000_expUp_graph1->GetYaxis()->SetLabelFont(42);
   Graph_x_1000_expUp_graph1->GetYaxis()->SetLabelSize(0.05);
   Graph_x_1000_expUp_graph1->GetYaxis()->SetTitleSize(0.06);
   Graph_x_1000_expUp_graph1->GetYaxis()->SetTitleFont(42);
   Graph_x_1000_expUp_graph1->GetZaxis()->SetLabelFont(42);
   Graph_x_1000_expUp_graph1->GetZaxis()->SetLabelSize(0.05);
   Graph_x_1000_expUp_graph1->GetZaxis()->SetTitleSize(0.06);
   Graph_x_1000_expUp_graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_x_1000_expUp_graph1);
   
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
   1578.55,
   929.3005,
   589.8227,
   433.4049,
   379.6273,
   368.1783,
   407.5748,
   636.3164,
   712.569,
   887.0244,
   1129.512,
   1700.576};
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
   Graph_x_50_obs_graph2->SetMinimum(234.9386);
   Graph_x_50_obs_graph2->SetMaximum(1833.816);
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
   65.38976,
   14.77271,
   8.340015,
   4.906422,
   3.87202,
   3.201375,
   2.540322,
   2.403126,
   2.387301,
   2.445706,
   2.584085,
   3.257927,
   3.93473,
   4.598897,
   5.325774,
   6.788384,
   8.951905,
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
   
   TH1F *Graph_Graph_x_1000_expUp_graph13 = new TH1F("Graph_Graph_x_1000_expUp_graph13","Graph",100,0.9,2199.9);
   Graph_Graph_x_1000_expUp_graph13->SetMinimum(0.5);
   Graph_Graph_x_1000_expUp_graph13->SetMaximum(5000);
   Graph_Graph_x_1000_expUp_graph13->SetDirectory(0);
   Graph_Graph_x_1000_expUp_graph13->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_x_1000_expUp_graph13->SetLineColor(ci);
   Graph_Graph_x_1000_expUp_graph13->GetXaxis()->SetTitle("c#tau_{0} [mm]");
   Graph_Graph_x_1000_expUp_graph13->GetXaxis()->SetLabelFont(42);
   Graph_Graph_x_1000_expUp_graph13->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_x_1000_expUp_graph13->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_x_1000_expUp_graph13->GetXaxis()->SetTitleFont(42);
   Graph_Graph_x_1000_expUp_graph13->GetYaxis()->SetTitle("#sigma x BR^{2} Upper Limit 95% [fb]");
   Graph_Graph_x_1000_expUp_graph13->GetYaxis()->SetLabelFont(42);
   Graph_Graph_x_1000_expUp_graph13->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_x_1000_expUp_graph13->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_x_1000_expUp_graph13->GetYaxis()->SetTitleFont(42);
   Graph_Graph_x_1000_expUp_graph13->GetZaxis()->SetLabelFont(42);
   Graph_Graph_x_1000_expUp_graph13->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_x_1000_expUp_graph13->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_x_1000_expUp_graph13->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_x_1000_expUp_graph13);
   
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
   68.25,
   14.5625,
   7.953125,
   4.796875,
   3.734375,
   3.070312,
   2.476562,
   2.429688,
   2.484375,
   2.664062,
   2.976562,
   4.234375,
   5.734375,
   7.34375,
   9.03125,
   12.5625,
   18.3125,
   48.375};
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
   Graph_x_300_exp_graph4->SetMinimum(2.186719);
   Graph_x_300_exp_graph4->SetMaximum(74.83203);
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
   
   Double_t x_100_obs_graph_fx5[18] = {
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
   Double_t x_100_obs_graph_fy5[18] = {
   588.0824,
   141.3991,
   81.91749,
   49.03494,
   39.45281,
   33.46202,
   29.312,
   31.20309,
   36.74332,
   42.41547,
   51.97204,
   91.46392,
   139.7272,
   182.8284,
   241.3872,
   377.0642,
   617.1452,
   1677.531};
   graph = new TGraph(18,x_100_obs_graph_fx5,x_100_obs_graph_fy5);
   graph->SetName("x_100_obs_graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#666699");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#666699");
   graph->SetLineColor(ci);
   graph->SetLineWidth(4);

   ci = TColor::GetColor("#666699");
   graph->SetMarkerColor(ci);
   
   TH1F *Graph_x_100_obs_graph5 = new TH1F("Graph_x_100_obs_graph5","Graph",100,0.9,2199.9);
   Graph_x_100_obs_graph5->SetMinimum(26.3808);
   Graph_x_100_obs_graph5->SetMaximum(1842.353);
   Graph_x_100_obs_graph5->SetDirectory(0);
   Graph_x_100_obs_graph5->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_x_100_obs_graph5->SetLineColor(ci);
   Graph_x_100_obs_graph5->GetXaxis()->SetLabelFont(42);
   Graph_x_100_obs_graph5->GetXaxis()->SetLabelSize(0.05);
   Graph_x_100_obs_graph5->GetXaxis()->SetTitleSize(0.06);
   Graph_x_100_obs_graph5->GetXaxis()->SetTitleFont(42);
   Graph_x_100_obs_graph5->GetYaxis()->SetLabelFont(42);
   Graph_x_100_obs_graph5->GetYaxis()->SetLabelSize(0.05);
   Graph_x_100_obs_graph5->GetYaxis()->SetTitleSize(0.06);
   Graph_x_100_obs_graph5->GetYaxis()->SetTitleFont(42);
   Graph_x_100_obs_graph5->GetZaxis()->SetLabelFont(42);
   Graph_x_100_obs_graph5->GetZaxis()->SetLabelSize(0.05);
   Graph_x_100_obs_graph5->GetZaxis()->SetTitleSize(0.06);
   Graph_x_100_obs_graph5->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_x_100_obs_graph5);
   
   graph->Draw("lp");
   
   Double_t x_100_expUp_graph_fx6[18] = {
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
   Double_t x_100_expUp_graph_fy6[18] = {
   1069.346,
   254.245,
   144.4541,
   87.50555,
   70.0968,
   59.86076,
   51.97948,
   55.4304,
   65.84684,
   75.96875,
   92.72976,
   161.1218,
   246.5976,
   325.2492,
   425.4557,
   658.3759,
   1066.971,
   3040.212};
   graph = new TGraph(18,x_100_expUp_graph_fx6,x_100_expUp_graph_fy6);
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
   Graph_x_100_expUp_graph6->SetMinimum(46.78153);
   Graph_x_100_expUp_graph6->SetMaximum(3339.036);
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
   65.87035,
   14.09807,
   7.729421,
   4.666916,
   3.638347,
   2.993127,
   2.423083,
   2.371628,
   2.428558,
   2.601725,
   2.915878,
   4.145773,
   5.575829,
   7.173984,
   8.786194,
   12.2396,
   17.81126,
   46.95921};
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
   Graph_x_300_obs_graph7->SetMinimum(2.134465);
   Graph_x_300_obs_graph7->SetMaximum(72.22022);
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
   122.1154,
   25.59138,
   13.8496,
   8.353297,
   6.503056,
   5.395608,
   4.391669,
   4.308546,
   4.405523,
   4.724162,
   5.278316,
   7.441271,
   9.985864,
   12.67135,
   15.43906,
   21.47579,
   31.30551,
   81.92652};
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
   Graph_x_300_expUp_graph8->SetMinimum(3.877691);
   Graph_x_300_expUp_graph8->SetMaximum(133.8961);
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
   986.7538,
   573.9981,
   371.2454,
   270.9567,
   238.7105,
   230.2426,
   255.3332,
   378.4346,
   429.9139,
   545.3347,
   709.0042,
   1069.333};
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
   Graph_x_50_expDn_graph9->SetMinimum(146.3335);
   Graph_x_50_expDn_graph9->SetMaximum(1153.242);
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
   
   Double_t x_100_exp_graph_fx10[18] = {
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
   Double_t x_100_exp_graph_fy10[18] = {
   608.5,
   146,
   84.5,
   50.25,
   40.625,
   34.375,
   30.125,
   32.125,
   37.8125,
   43.625,
   53.25,
   94.25,
   144.25,
   188.5,
   248.875,
   388.75,
   636,
   1730};
   graph = new TGraph(18,x_100_exp_graph_fx10,x_100_exp_graph_fy10);
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
   Graph_x_100_exp_graph10->SetMinimum(27.1125);
   Graph_x_100_exp_graph10->SetMaximum(1899.987);
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
   1627.5,
   958.25,
   609.75,
   446.75,
   391.25,
   379.75,
   420.25,
   656.5,
   733.5,
   912.875,
   1164.5,
   1749};
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
   Graph_x_50_exp_graph11->SetMinimum(242.825);
   Graph_x_50_exp_graph11->SetMaximum(1885.925);
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
   20.79898,
   4.910754,
   2.72321,
   1.563036,
   1.219555,
   0.9810044,
   0.7540997,
   0.703005,
   0.6890846,
   0.7067966,
   0.753213,
   0.9671223,
   1.207183,
   1.443526,
   1.687034,
   2.211251,
   3.002143,
   5.984808};
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
   Graph_x_1000_expDn_graph12->SetMinimum(0.6201762);
   Graph_x_1000_expDn_graph12->SetMaximum(22.80997);
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
   
   Double_t x_100_expDn_graph_fx13[18] = {
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
   Double_t x_100_expDn_graph_fy13[18] = {
   368.5763,
   87.83147,
   51.23238,
   30.14647,
   24.14465,
   20.4693,
   17.90016,
   18.96932,
   22.32352,
   25.75989,
   31.7088,
   56.4384,
   87.09125,
   114.768,
   152.1614,
   238.6711,
   392.0897,
   1040.743};
   graph = new TGraph(18,x_100_expDn_graph_fx13,x_100_expDn_graph_fy13);
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
   Graph_x_100_expDn_graph13->SetMinimum(16.11015);
   Graph_x_100_expDn_graph13->SetMaximum(1143.027);
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
   34.82735,
   8.138326,
   4.5793,
   2.682025,
   2.108875,
   1.73021,
   1.356304,
   1.275553,
   1.2592,
   1.292809,
   1.369996,
   1.742855,
   2.130883,
   2.510073,
   2.914402,
   3.751089,
   5.02989,
   9.846511};
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
   Graph_x_1000_obs_graph14->SetMinimum(1.13328);
   Graph_x_1000_obs_graph14->SetMaximum(38.18416);
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
   35.90625,
   8.40625,
   4.703125,
   2.742188,
   2.164062,
   1.773438,
   1.382812,
   1.296875,
   1.277344,
   1.308594,
   1.394531,
   1.773438,
   2.179688,
   2.570312,
   2.976562,
   3.828125,
   5.140625,
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
   Graph_x_1000_exp_graph15->SetMinimum(1.149609);
   Graph_x_1000_exp_graph15->SetMaximum(39.36914);
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
   40.33572,
   8.657317,
   4.707575,
   2.838062,
   2.185945,
   1.789161,
   1.414824,
   1.378646,
   1.409677,
   1.511635,
   1.696628,
   2.464797,
   3.363507,
   4.363629,
   5.389349,
   7.560627,
   11.10287,
   29.32978};
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
   Graph_x_300_expDn_graph16->SetMinimum(1.240782);
   Graph_x_300_expDn_graph16->SetMaximum(44.23143);
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
   2808.186,
   1653.422,
   1042.377,
   763.7261,
   668.848,
   649.1885,
   718.424,
   1174.634,
   1277.32,
   1567.852,
   1972.164,
   2934.17};
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
   Graph_x_50_expUp_graph17->SetMinimum(420.6904);
   Graph_x_50_expUp_graph17->SetMaximum(3162.668);
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
      tex = new TLatex(0.175,0.235,"Jet-Jet");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.065);
   tex->SetLineWidth(2);
   tex->Draw();
   x_slice_canvas->Modified();
   x_slice_canvas->cd();
   x_slice_canvas->SetSelected(x_slice_canvas);
}
