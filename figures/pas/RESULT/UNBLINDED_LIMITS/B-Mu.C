void B-Mu()
{
//=========Macro generated from canvas: x_slice_canvas/x
//=========  (Tue Dec  6 13:03:38 2016) by ROOT version6.06/01
   TCanvas *x_slice_canvas = new TCanvas("x_slice_canvas", "x",0,23,1024,768);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   x_slice_canvas->SetHighLightColor(2);
   x_slice_canvas->Range(-0.8048831,-1.142857,4.255954,4.571429);
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
   
   Double_t x_1000_expBand_graph_fx1[35] = {
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
   1000,
   700,
   500,
   400,
   300,
   200,
   100,
   70,
   50,
   30,
   20,
   10,
   7,
   5,
   3,
   2,
   1,
   1};
   Double_t x_1000_expBand_graph_fy1[35] = {
   718.6614,
   105.6844,
   50.68538,
   24.68113,
   16.93489,
   12.44741,
   7.647533,
   6.757929,
   6.112734,
   6.063438,
   6.223705,
   6.933058,
   8.123851,
   9.632188,
   11.37868,
   15.18922,
   21.80473,
   7.838925,
   5.437757,
   4.056459,
   3.43384,
   2.896123,
   2.463787,
   2.207312,
   2.145952,
   2.179168,
   2.396781,
   2.749332,
   4.433179,
   6.031406,
   8.72262,
   17.81007,
   36.71673,
   232.7084,
   718.6614};
   TGraph *graph = new TGraph(35,x_1000_expBand_graph_fx1,x_1000_expBand_graph_fy1);
   graph->SetName("x_1000_expBand_graph");
   graph->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933cc");
   graph->SetFillColor(ci);
   graph->SetFillStyle(3002);

   ci = TColor::GetColor("#9933cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   graph->SetMarkerSize(1.1);
   
   TH1F *Graph_x_1000_expBand_graph1 = new TH1F("Graph_x_1000_expBand_graph1","Graph",100,0.9,1099.9);
   Graph_x_1000_expBand_graph1->SetMinimum(1);
   Graph_x_1000_expBand_graph1->SetMaximum(10000);
   Graph_x_1000_expBand_graph1->SetDirectory(0);
   Graph_x_1000_expBand_graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_x_1000_expBand_graph1->SetLineColor(ci);
   Graph_x_1000_expBand_graph1->GetXaxis()->SetTitle("c#tau_{0} [mm]");
   Graph_x_1000_expBand_graph1->GetXaxis()->SetLabelFont(42);
   Graph_x_1000_expBand_graph1->GetXaxis()->SetLabelSize(0.05);
   Graph_x_1000_expBand_graph1->GetXaxis()->SetTitleSize(0.06);
   Graph_x_1000_expBand_graph1->GetXaxis()->SetTitleFont(42);
   Graph_x_1000_expBand_graph1->GetYaxis()->SetTitle("#sigma x BR^{2} Upper Limit 95% CL [fb]");
   Graph_x_1000_expBand_graph1->GetYaxis()->SetLabelFont(42);
   Graph_x_1000_expBand_graph1->GetYaxis()->SetLabelSize(0.05);
   Graph_x_1000_expBand_graph1->GetYaxis()->SetTitleSize(0.06);
   Graph_x_1000_expBand_graph1->GetYaxis()->SetTitleFont(42);
   Graph_x_1000_expBand_graph1->GetZaxis()->SetLabelFont(42);
   Graph_x_1000_expBand_graph1->GetZaxis()->SetLabelSize(0.05);
   Graph_x_1000_expBand_graph1->GetZaxis()->SetTitleSize(0.06);
   Graph_x_1000_expBand_graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_x_1000_expBand_graph1);
   
   graph->Draw("af");
   
   Double_t x_300_expBand_graph_fx2[35] = {
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
   1000,
   700,
   500,
   400,
   300,
   200,
   100,
   70,
   50,
   30,
   20,
   10,
   7,
   5,
   3,
   2,
   1,
   1};
   Double_t x_300_expBand_graph_fy2[35] = {
   5883.784,
   1067.216,
   395.0812,
   168.087,
   111.5459,
   77.14189,
   46.65901,
   41.52127,
   41.20672,
   44.24742,
   51.37733,
   73.73719,
   108.7312,
   146.373,
   188.3137,
   281.2123,
   444.1518,
   164.5659,
   104.194,
   69.77344,
   54.45603,
   40.45193,
   27.69612,
   19.03618,
   16.39443,
   15.2678,
   15.38434,
   17.28796,
   27.76176,
   39.75823,
   60.73111,
   146.3844,
   402.4891,
   2004.617,
   5883.784};
   graph = new TGraph(35,x_300_expBand_graph_fx2,x_300_expBand_graph_fy2);
   graph->SetName("x_300_expBand_graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#9999ff");
   graph->SetFillColor(ci);
   graph->SetFillStyle(3002);

   ci = TColor::GetColor("#9999ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   graph->SetMarkerSize(1.1);
   
   TH1F *Graph_x_300_expBand_graph2 = new TH1F("Graph_x_300_expBand_graph2","Graph",100,0.9,1099.9);
   Graph_x_300_expBand_graph2->SetMinimum(13.74102);
   Graph_x_300_expBand_graph2->SetMaximum(6470.635);
   Graph_x_300_expBand_graph2->SetDirectory(0);
   Graph_x_300_expBand_graph2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_x_300_expBand_graph2->SetLineColor(ci);
   Graph_x_300_expBand_graph2->GetXaxis()->SetLabelFont(42);
   Graph_x_300_expBand_graph2->GetXaxis()->SetLabelSize(0.05);
   Graph_x_300_expBand_graph2->GetXaxis()->SetTitleSize(0.06);
   Graph_x_300_expBand_graph2->GetXaxis()->SetTitleFont(42);
   Graph_x_300_expBand_graph2->GetYaxis()->SetLabelFont(42);
   Graph_x_300_expBand_graph2->GetYaxis()->SetLabelSize(0.05);
   Graph_x_300_expBand_graph2->GetYaxis()->SetTitleSize(0.06);
   Graph_x_300_expBand_graph2->GetYaxis()->SetTitleFont(42);
   Graph_x_300_expBand_graph2->GetZaxis()->SetLabelFont(42);
   Graph_x_300_expBand_graph2->GetZaxis()->SetLabelSize(0.05);
   Graph_x_300_expBand_graph2->GetZaxis()->SetTitleSize(0.06);
   Graph_x_300_expBand_graph2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_x_300_expBand_graph2);
   
   graph->Draw("f");
   
   Double_t x_1000_expUp_graph_fx3[17] = {
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
   Double_t x_1000_expUp_graph_fy3[17] = {
   718.6614,
   105.6844,
   50.68538,
   24.68113,
   16.93489,
   12.44741,
   7.647533,
   6.757929,
   6.112734,
   6.063438,
   6.223705,
   6.933058,
   8.123851,
   9.632188,
   11.37868,
   15.18922,
   21.80473};
   graph = new TGraph(17,x_1000_expUp_graph_fx3,x_1000_expUp_graph_fy3);
   graph->SetName("x_1000_expUp_graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#9933cc");
   graph->SetFillColor(ci);
   graph->SetFillStyle(3002);

   ci = TColor::GetColor("#9933cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   graph->SetMarkerSize(1.1);
   
   TH1F *Graph_x_1000_expUp_graph3 = new TH1F("Graph_x_1000_expUp_graph3","Graph",100,0.9,1099.9);
   Graph_x_1000_expUp_graph3->SetMinimum(1);
   Graph_x_1000_expUp_graph3->SetMaximum(10000);
   Graph_x_1000_expUp_graph3->SetDirectory(0);
   Graph_x_1000_expUp_graph3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_x_1000_expUp_graph3->SetLineColor(ci);
   Graph_x_1000_expUp_graph3->GetXaxis()->SetTitle("c#tau_{0} [mm]");
   Graph_x_1000_expUp_graph3->GetXaxis()->SetLabelFont(42);
   Graph_x_1000_expUp_graph3->GetXaxis()->SetLabelSize(0.05);
   Graph_x_1000_expUp_graph3->GetXaxis()->SetTitleSize(0.06);
   Graph_x_1000_expUp_graph3->GetXaxis()->SetTitleFont(42);
   Graph_x_1000_expUp_graph3->GetYaxis()->SetTitle("#sigma x BR^{2} Upper Limit 95% CL [fb]");
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
   
   Double_t x_300_exp_graph_fx4[17] = {
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
   Double_t x_300_exp_graph_fy4[17] = {
   3318,
   642.25,
   235.5,
   99.25,
   65.25,
   45.125,
   27.8125,
   24.75,
   24.5625,
   26.375,
   30.625,
   44.375,
   64.8125,
   87.25,
   112.25,
   167.625,
   264.75};
   graph = new TGraph(17,x_300_exp_graph_fx4,x_300_exp_graph_fy4);
   graph->SetName("x_300_exp_graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#9999ff");
   graph->SetFillColor(ci);
   graph->SetFillStyle(3002);

   ci = TColor::GetColor("#9999ff");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(4);
   graph->SetMarkerSize(1.1);
   
   TH1F *Graph_x_300_exp_graph4 = new TH1F("Graph_x_300_exp_graph4","Graph",100,0.9,1099.9);
   Graph_x_300_exp_graph4->SetMinimum(22.10625);
   Graph_x_300_exp_graph4->SetMaximum(3647.344);
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
   
   Double_t x_1000_expDn_graph_fx5[17] = {
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
   Double_t x_1000_expDn_graph_fy5[17] = {
   232.7084,
   36.71673,
   17.81007,
   8.72262,
   6.031406,
   4.433179,
   2.749332,
   2.396781,
   2.179168,
   2.145952,
   2.207312,
   2.463787,
   2.896123,
   3.43384,
   4.056459,
   5.437757,
   7.838925};
   graph = new TGraph(17,x_1000_expDn_graph_fx5,x_1000_expDn_graph_fy5);
   graph->SetName("x_1000_expDn_graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#9933cc");
   graph->SetFillColor(ci);
   graph->SetFillStyle(3002);

   ci = TColor::GetColor("#9933cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   graph->SetMarkerSize(1.1);
   
   TH1F *Graph_x_1000_expDn_graph5 = new TH1F("Graph_x_1000_expDn_graph5","Graph",100,0.9,1099.9);
   Graph_x_1000_expDn_graph5->SetMinimum(1.931357);
   Graph_x_1000_expDn_graph5->SetMaximum(255.7646);
   Graph_x_1000_expDn_graph5->SetDirectory(0);
   Graph_x_1000_expDn_graph5->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_x_1000_expDn_graph5->SetLineColor(ci);
   Graph_x_1000_expDn_graph5->GetXaxis()->SetLabelFont(42);
   Graph_x_1000_expDn_graph5->GetXaxis()->SetLabelSize(0.05);
   Graph_x_1000_expDn_graph5->GetXaxis()->SetTitleSize(0.06);
   Graph_x_1000_expDn_graph5->GetXaxis()->SetTitleFont(42);
   Graph_x_1000_expDn_graph5->GetYaxis()->SetLabelFont(42);
   Graph_x_1000_expDn_graph5->GetYaxis()->SetLabelSize(0.05);
   Graph_x_1000_expDn_graph5->GetYaxis()->SetTitleSize(0.06);
   Graph_x_1000_expDn_graph5->GetYaxis()->SetTitleFont(42);
   Graph_x_1000_expDn_graph5->GetZaxis()->SetLabelFont(42);
   Graph_x_1000_expDn_graph5->GetZaxis()->SetLabelSize(0.05);
   Graph_x_1000_expDn_graph5->GetZaxis()->SetTitleSize(0.06);
   Graph_x_1000_expDn_graph5->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_x_1000_expDn_graph5);
   
   graph->Draw("lp");
   
   Double_t x_300_expUp_graph_fx6[17] = {
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
   Double_t x_300_expUp_graph_fy6[17] = {
   5883.784,
   1067.216,
   395.0812,
   168.087,
   111.5459,
   77.14189,
   46.65901,
   41.52127,
   41.20672,
   44.24742,
   51.37733,
   73.73719,
   108.7312,
   146.373,
   188.3137,
   281.2123,
   444.1518};
   graph = new TGraph(17,x_300_expUp_graph_fx6,x_300_expUp_graph_fy6);
   graph->SetName("x_300_expUp_graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#9999ff");
   graph->SetFillColor(ci);
   graph->SetFillStyle(3002);

   ci = TColor::GetColor("#9999ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   graph->SetMarkerSize(1.1);
   
   TH1F *Graph_x_300_expUp_graph6 = new TH1F("Graph_x_300_expUp_graph6","Graph",100,0.9,1099.9);
   Graph_x_300_expUp_graph6->SetMinimum(37.08605);
   Graph_x_300_expUp_graph6->SetMaximum(6468.041);
   Graph_x_300_expUp_graph6->SetDirectory(0);
   Graph_x_300_expUp_graph6->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_x_300_expUp_graph6->SetLineColor(ci);
   Graph_x_300_expUp_graph6->GetXaxis()->SetLabelFont(42);
   Graph_x_300_expUp_graph6->GetXaxis()->SetLabelSize(0.05);
   Graph_x_300_expUp_graph6->GetXaxis()->SetTitleSize(0.06);
   Graph_x_300_expUp_graph6->GetXaxis()->SetTitleFont(42);
   Graph_x_300_expUp_graph6->GetYaxis()->SetLabelFont(42);
   Graph_x_300_expUp_graph6->GetYaxis()->SetLabelSize(0.05);
   Graph_x_300_expUp_graph6->GetYaxis()->SetTitleSize(0.06);
   Graph_x_300_expUp_graph6->GetYaxis()->SetTitleFont(42);
   Graph_x_300_expUp_graph6->GetZaxis()->SetLabelFont(42);
   Graph_x_300_expUp_graph6->GetZaxis()->SetLabelSize(0.05);
   Graph_x_300_expUp_graph6->GetZaxis()->SetTitleSize(0.06);
   Graph_x_300_expUp_graph6->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_x_300_expUp_graph6);
   
   graph->Draw("lp");
   
   Double_t x_300_obs_graph_fx7[17] = {
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
   Double_t x_300_obs_graph_fy7[17] = {
   3206.647,
   623.3967,
   228.513,
   96.07431,
   63.05768,
   43.84191,
   27.01522,
   24.01171,
   23.807,
   25.63762,
   29.70998,
   42.8386,
   62.86751,
   84.82151,
   108.817,
   162.6052,
   256.9146};
   graph = new TGraph(17,x_300_obs_graph_fx7,x_300_obs_graph_fy7);
   graph->SetName("x_300_obs_graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#9999ff");
   graph->SetFillColor(ci);
   graph->SetFillStyle(3002);

   ci = TColor::GetColor("#9999ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(4);
   
   TH1F *Graph_x_300_obs_graph7 = new TH1F("Graph_x_300_obs_graph7","Graph",100,0.9,1099.9);
   Graph_x_300_obs_graph7->SetMinimum(21.4263);
   Graph_x_300_obs_graph7->SetMaximum(3524.931);
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
   
   Double_t x_1000_obs_graph_fx8[17] = {
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
   Double_t x_1000_obs_graph_fy8[17] = {
   381.7053,
   59.20989,
   28.59298,
   13.97145,
   9.640198,
   7.080999,
   4.383481,
   3.83831,
   3.496054,
   3.446919,
   3.539199,
   3.983291,
   4.668804,
   5.518487,
   6.49706,
   8.702364,
   12.48907};
   graph = new TGraph(17,x_1000_obs_graph_fx8,x_1000_obs_graph_fy8);
   graph->SetName("x_1000_obs_graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#9933cc");
   graph->SetFillColor(ci);
   graph->SetFillStyle(3002);

   ci = TColor::GetColor("#9933cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(4);
   
   TH1F *Graph_x_1000_obs_graph8 = new TH1F("Graph_x_1000_obs_graph8","Graph",100,0.9,1099.9);
   Graph_x_1000_obs_graph8->SetMinimum(3.102227);
   Graph_x_1000_obs_graph8->SetMaximum(419.5312);
   Graph_x_1000_obs_graph8->SetDirectory(0);
   Graph_x_1000_obs_graph8->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_x_1000_obs_graph8->SetLineColor(ci);
   Graph_x_1000_obs_graph8->GetXaxis()->SetLabelFont(42);
   Graph_x_1000_obs_graph8->GetXaxis()->SetLabelSize(0.05);
   Graph_x_1000_obs_graph8->GetXaxis()->SetTitleSize(0.06);
   Graph_x_1000_obs_graph8->GetXaxis()->SetTitleFont(42);
   Graph_x_1000_obs_graph8->GetYaxis()->SetLabelFont(42);
   Graph_x_1000_obs_graph8->GetYaxis()->SetLabelSize(0.05);
   Graph_x_1000_obs_graph8->GetYaxis()->SetTitleSize(0.06);
   Graph_x_1000_obs_graph8->GetYaxis()->SetTitleFont(42);
   Graph_x_1000_obs_graph8->GetZaxis()->SetLabelFont(42);
   Graph_x_1000_obs_graph8->GetZaxis()->SetLabelSize(0.05);
   Graph_x_1000_obs_graph8->GetZaxis()->SetTitleSize(0.06);
   Graph_x_1000_obs_graph8->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_x_1000_obs_graph8);
   
   graph->Draw("lp");
   
   Double_t x_1000_exp_graph_fx9[17] = {
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
   Double_t x_1000_exp_graph_fy9[17] = {
   394.625,
   61.25,
   29.375,
   14.4375,
   9.90625,
   7.28125,
   4.515625,
   3.953125,
   3.609375,
   3.546875,
   3.640625,
   4.09375,
   4.796875,
   5.6875,
   6.71875,
   8.96875,
   12.875};
   graph = new TGraph(17,x_1000_exp_graph_fx9,x_1000_exp_graph_fy9);
   graph->SetName("x_1000_exp_graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#9933cc");
   graph->SetFillColor(ci);
   graph->SetFillStyle(3002);

   ci = TColor::GetColor("#9933cc");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(4);
   graph->SetMarkerSize(1.1);
   
   TH1F *Graph_x_1000_exp_graph9 = new TH1F("Graph_x_1000_exp_graph9","Graph",100,0.9,1099.9);
   Graph_x_1000_exp_graph9->SetMinimum(3.192188);
   Graph_x_1000_exp_graph9->SetMaximum(433.7328);
   Graph_x_1000_exp_graph9->SetDirectory(0);
   Graph_x_1000_exp_graph9->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_x_1000_exp_graph9->SetLineColor(ci);
   Graph_x_1000_exp_graph9->GetXaxis()->SetLabelFont(42);
   Graph_x_1000_exp_graph9->GetXaxis()->SetLabelSize(0.05);
   Graph_x_1000_exp_graph9->GetXaxis()->SetTitleSize(0.06);
   Graph_x_1000_exp_graph9->GetXaxis()->SetTitleFont(42);
   Graph_x_1000_exp_graph9->GetYaxis()->SetLabelFont(42);
   Graph_x_1000_exp_graph9->GetYaxis()->SetLabelSize(0.05);
   Graph_x_1000_exp_graph9->GetYaxis()->SetTitleSize(0.06);
   Graph_x_1000_exp_graph9->GetYaxis()->SetTitleFont(42);
   Graph_x_1000_exp_graph9->GetZaxis()->SetLabelFont(42);
   Graph_x_1000_exp_graph9->GetZaxis()->SetLabelSize(0.05);
   Graph_x_1000_exp_graph9->GetZaxis()->SetTitleSize(0.06);
   Graph_x_1000_exp_graph9->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_x_1000_exp_graph9);
   
   graph->Draw("lp");
   
   Double_t x_300_expDn_graph_fx10[17] = {
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
   Double_t x_300_expDn_graph_fy10[17] = {
   2004.617,
   402.4891,
   146.3844,
   60.73111,
   39.75823,
   27.76176,
   17.28796,
   15.38434,
   15.2678,
   16.39443,
   19.03618,
   27.69612,
   40.45193,
   54.45603,
   69.77344,
   104.194,
   164.5659};
   graph = new TGraph(17,x_300_expDn_graph_fx10,x_300_expDn_graph_fy10);
   graph->SetName("x_300_expDn_graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#9999ff");
   graph->SetFillColor(ci);
   graph->SetFillStyle(3002);

   ci = TColor::GetColor("#9999ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   graph->SetMarkerSize(1.1);
   
   TH1F *Graph_x_300_expDn_graph10 = new TH1F("Graph_x_300_expDn_graph10","Graph",100,0.9,1099.9);
   Graph_x_300_expDn_graph10->SetMinimum(13.74102);
   Graph_x_300_expDn_graph10->SetMaximum(2203.551);
   Graph_x_300_expDn_graph10->SetDirectory(0);
   Graph_x_300_expDn_graph10->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_x_300_expDn_graph10->SetLineColor(ci);
   Graph_x_300_expDn_graph10->GetXaxis()->SetLabelFont(42);
   Graph_x_300_expDn_graph10->GetXaxis()->SetLabelSize(0.05);
   Graph_x_300_expDn_graph10->GetXaxis()->SetTitleSize(0.06);
   Graph_x_300_expDn_graph10->GetXaxis()->SetTitleFont(42);
   Graph_x_300_expDn_graph10->GetYaxis()->SetLabelFont(42);
   Graph_x_300_expDn_graph10->GetYaxis()->SetLabelSize(0.05);
   Graph_x_300_expDn_graph10->GetYaxis()->SetTitleSize(0.06);
   Graph_x_300_expDn_graph10->GetYaxis()->SetTitleFont(42);
   Graph_x_300_expDn_graph10->GetZaxis()->SetLabelFont(42);
   Graph_x_300_expDn_graph10->GetZaxis()->SetLabelSize(0.05);
   Graph_x_300_expDn_graph10->GetZaxis()->SetTitleSize(0.06);
   Graph_x_300_expDn_graph10->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_x_300_expDn_graph10);
   
   graph->Draw("lp");
   
   Double_t Graph0_fx1001[2] = {
   1,
   1000};
   Double_t Graph0_fy1001[2] = {
   28.3338,
   28.3338};
   Double_t Graph0_fex1001[2] = {
   0,
   0};
   Double_t Graph0_fey1001[2] = {
   4.015183,
   4.015183};
   gre = new TGraphErrors(2,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(3002);

   ci = TColor::GetColor("#006600");
   gre->SetLineColor(ci);
   gre->SetLineStyle(9);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","Graph",100,0.9,1099.9);
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
   
   Double_t Graph1_fx1002[2] = {
   1,
   1000};
   Double_t Graph1_fy1002[2] = {
   6.15134,
   6.15134};
   Double_t Graph1_fex1002[2] = {
   0,
   0};
   Double_t Graph1_fey1002[2] = {
   1.002379,
   1.002379};
   gre = new TGraphErrors(2,Graph1_fx1002,Graph1_fy1002,Graph1_fex1002,Graph1_fey1002);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(3002);

   ci = TColor::GetColor("#003300");
   gre->SetLineColor(ci);
   gre->SetLineStyle(9);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph1002 = new TH1F("Graph_Graph1002","Graph",100,0.9,1099.9);
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
   
   Double_t Graph2_fx1003[2] = {
   1,
   1000};
   Double_t Graph2_fy1003[2] = {
   174.599,
   174.599};
   Double_t Graph2_fex1003[2] = {
   0,
   0};
   Double_t Graph2_fey1003[2] = {
   23.05999,
   23.05999};
   gre = new TGraphErrors(2,Graph2_fx1003,Graph2_fy1003,Graph2_fex1003,Graph2_fey1003);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(3002);

   ci = TColor::GetColor("#009900");
   gre->SetLineColor(ci);
   gre->SetLineStyle(9);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","Graph",100,0.9,1099.9);
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
   
   Double_t Graph3_fx1004[2] = {
   1,
   1000};
   Double_t Graph3_fy1004[2] = {
   8516.15,
   8516.15};
   Double_t Graph3_fex1004[2] = {
   0,
   0};
   Double_t Graph3_fey1004[2] = {
   1185.644,
   1185.644};
   gre = new TGraphErrors(2,Graph3_fx1004,Graph3_fy1004,Graph3_fex1004,Graph3_fey1004);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(3002);

   ci = TColor::GetColor("#00ff00");
   gre->SetLineColor(ci);
   gre->SetLineStyle(9);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph1004 = new TH1F("Graph_Graph1004","Graph",100,0.9,1099.9);
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
   
   TLegend *leg = new TLegend(0.7739726,0.204576,0.9843444,0.9044415,NULL,"brNDC");
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
   entry=leg->AddEntry("x_300_expUp_graph","m_{#tilde{t}}=300 GeV","f");

   ci = TColor::GetColor("#9999ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3002);

   ci = TColor::GetColor("#9999ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("x_1000_expUp_graph","m_{#tilde{t}}=1000 GeV","f");

   ci = TColor::GetColor("#9933cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3002);

   ci = TColor::GetColor("#9933cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","#sigma_{NLO+NLL} #tilde{t}#tilde{t}","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph3","m_{#tilde{t}}=300 GeV","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(9);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","m_{#tilde{t}}=600 GeV","l");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(9);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph0","m_{#tilde{t}}=800 GeV","l");

   ci = TColor::GetColor("#006600");
   entry->SetLineColor(ci);
   entry->SetLineStyle(9);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","m_{#tilde{t}}=1000 GeV","l");

   ci = TColor::GetColor("#003300");
   entry->SetLineColor(ci);
   entry->SetLineStyle(9);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.76,0.92,"2.7 fb^{-1} (13 TeV)");
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
      tex = new TLatex(0.175,0.235,"B-Mu");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.065);
   tex->SetLineWidth(2);
   tex->Draw();
   x_slice_canvas->Modified();
   x_slice_canvas->cd();
   x_slice_canvas->SetSelected(x_slice_canvas);
}
