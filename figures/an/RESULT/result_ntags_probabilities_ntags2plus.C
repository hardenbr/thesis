void plot()
{
//=========Macro generated from canvas: plot/plot
//=========  (Sat Jan 23 14:48:27 2016) by ROOT version6.02/05
   TCanvas *plot = new TCanvas("plot", "plot",337,125,920,1040);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   plot->SetHighLightColor(2);
   plot->Range(0,0,1,1);
   plot->SetFillColor(0);
   plot->SetBorderMode(0);
   plot->SetBorderSize(2);
   plot->SetTickx(1);
   plot->SetTicky(1);
   plot->SetLeftMargin(0.15);
   plot->SetRightMargin(0.15);
   plot->SetBottomMargin(0.2);
   plot->SetFrameFillStyle(0);
   plot->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "The pad 80% of the height",0,0.4,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(0.9333333,-0.7,6.266667,33.79438);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
   pad1->SetTickx(1);
   pad1->SetTicky(1);
   pad1->SetLeftMargin(0.2);
   pad1->SetRightMargin(0.05);
   pad1->SetBottomMargin(0);
   pad1->SetFrameFillStyle(0);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameFillStyle(0);
   pad1->SetFrameBorderMode(0);
   
   TH1F *tree_XXTo4J_500_30mm_jets1 = new TH1F("tree_XXTo4J_500_30mm_jets1"," XX4J m_{X}=300GeV c#tau=30mm  ",4,2,6);
   tree_XXTo4J_500_30mm_jets1->SetBinContent(1,29.48);
   tree_XXTo4J_500_30mm_jets1->SetBinContent(2,20.18);
   tree_XXTo4J_500_30mm_jets1->SetBinContent(3,12.18);
   tree_XXTo4J_500_30mm_jets1->SetBinContent(4,2.38);
   tree_XXTo4J_500_30mm_jets1->SetBinContent(5,0.24);
   tree_XXTo4J_500_30mm_jets1->SetBinError(1,0.5429549);
   tree_XXTo4J_500_30mm_jets1->SetBinError(2,0.4492215);
   tree_XXTo4J_500_30mm_jets1->SetBinError(3,0.3489986);
   tree_XXTo4J_500_30mm_jets1->SetBinError(4,0.1542725);
   tree_XXTo4J_500_30mm_jets1->SetBinError(5,0.04898979);
   tree_XXTo4J_500_30mm_jets1->SetMinimum(-0.7);
   tree_XXTo4J_500_30mm_jets1->SetMaximum(30);
   tree_XXTo4J_500_30mm_jets1->SetEntries(6446);
   tree_XXTo4J_500_30mm_jets1->SetStats(0);
   tree_XXTo4J_500_30mm_jets1->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff9999");
   tree_XXTo4J_500_30mm_jets1->SetLineColor(ci);
   tree_XXTo4J_500_30mm_jets1->SetLineWidth(2);

   ci = TColor::GetColor("#ff9999");
   tree_XXTo4J_500_30mm_jets1->SetMarkerColor(ci);
   tree_XXTo4J_500_30mm_jets1->GetXaxis()->SetLabelFont(42);
   tree_XXTo4J_500_30mm_jets1->GetXaxis()->SetLabelSize(0.05);
   tree_XXTo4J_500_30mm_jets1->GetXaxis()->SetTitleSize(0.06);
   tree_XXTo4J_500_30mm_jets1->GetXaxis()->SetTitleFont(42);
   tree_XXTo4J_500_30mm_jets1->GetYaxis()->SetTitle("N Events");
   tree_XXTo4J_500_30mm_jets1->GetYaxis()->SetLabelFont(42);
   tree_XXTo4J_500_30mm_jets1->GetYaxis()->SetLabelSize(0.06);
   tree_XXTo4J_500_30mm_jets1->GetYaxis()->SetTitleSize(0.1);
   tree_XXTo4J_500_30mm_jets1->GetYaxis()->SetTitleOffset(0.8);
   tree_XXTo4J_500_30mm_jets1->GetYaxis()->SetTitleFont(42);
   tree_XXTo4J_500_30mm_jets1->GetZaxis()->SetLabelFont(42);
   tree_XXTo4J_500_30mm_jets1->GetZaxis()->SetLabelSize(0.05);
   tree_XXTo4J_500_30mm_jets1->GetZaxis()->SetTitleSize(0.06);
   tree_XXTo4J_500_30mm_jets1->GetZaxis()->SetTitleFont(42);
   tree_XXTo4J_500_30mm_jets1->Draw("hist");
   
   TH1F *tree_DATA_DisplacedJet_clone_jets2 = new TH1F("tree_DATA_DisplacedJet_clone_jets2"," Prediction ",4,2,6);
   tree_DATA_DisplacedJet_clone_jets2->SetBinContent(1,4.173684);
   tree_DATA_DisplacedJet_clone_jets2->SetBinContent(2,0.003856074);
   tree_DATA_DisplacedJet_clone_jets2->SetBinContent(3,1.707271e-06);
   tree_DATA_DisplacedJet_clone_jets2->SetBinContent(4,5.023978e-10);
   tree_DATA_DisplacedJet_clone_jets2->SetBinContent(5,9.137732e-14);
   tree_DATA_DisplacedJet_clone_jets2->SetBinError(1,0.03165881);
   tree_DATA_DisplacedJet_clone_jets2->SetBinError(2,0.0001236518);
   tree_DATA_DisplacedJet_clone_jets2->SetBinError(3,7.786144e-08);
   tree_DATA_DisplacedJet_clone_jets2->SetBinError(4,4.73734e-11);
   tree_DATA_DisplacedJet_clone_jets2->SetBinError(5,1.552731e-14);
   tree_DATA_DisplacedJet_clone_jets2->SetMinimum(-1.396588);
   tree_DATA_DisplacedJet_clone_jets2->SetMaximum(29.67493);
   tree_DATA_DisplacedJet_clone_jets2->SetEntries(1530931);
   tree_DATA_DisplacedJet_clone_jets2->SetStats(0);

   ci = 974;
   color = new TColor(ci, 0.4, 0.2, 0.6, " ", 0.6);
   tree_DATA_DisplacedJet_clone_jets2->SetFillColor(ci);
   tree_DATA_DisplacedJet_clone_jets2->SetFillStyle(3001);

   ci = TColor::GetColor("#663399");
   tree_DATA_DisplacedJet_clone_jets2->SetLineColor(ci);
   tree_DATA_DisplacedJet_clone_jets2->SetLineWidth(2);

   ci = TColor::GetColor("#663399");
   tree_DATA_DisplacedJet_clone_jets2->SetMarkerColor(ci);
   tree_DATA_DisplacedJet_clone_jets2->SetMarkerStyle(25);
   tree_DATA_DisplacedJet_clone_jets2->SetMarkerSize(1.3);
   tree_DATA_DisplacedJet_clone_jets2->GetXaxis()->SetLabelFont(42);
   tree_DATA_DisplacedJet_clone_jets2->GetXaxis()->SetLabelSize(0.05);
   tree_DATA_DisplacedJet_clone_jets2->GetXaxis()->SetTitleSize(0.06);
   tree_DATA_DisplacedJet_clone_jets2->GetXaxis()->SetTitleFont(42);
   tree_DATA_DisplacedJet_clone_jets2->GetYaxis()->SetLabelFont(42);
   tree_DATA_DisplacedJet_clone_jets2->GetYaxis()->SetLabelSize(0.05);
   tree_DATA_DisplacedJet_clone_jets2->GetYaxis()->SetTitleSize(0.06);
   tree_DATA_DisplacedJet_clone_jets2->GetYaxis()->SetTitleFont(42);
   tree_DATA_DisplacedJet_clone_jets2->GetZaxis()->SetLabelFont(42);
   tree_DATA_DisplacedJet_clone_jets2->GetZaxis()->SetLabelSize(0.05);
   tree_DATA_DisplacedJet_clone_jets2->GetZaxis()->SetTitleSize(0.06);
   tree_DATA_DisplacedJet_clone_jets2->GetZaxis()->SetTitleFont(42);
   tree_DATA_DisplacedJet_clone_jets2->Draw("hist e0 same");
   
   TH1F *tree_XXTo4J_500_1000mm_jets3 = new TH1F("tree_XXTo4J_500_1000mm_jets3"," XX4J m_{X}=300GeV c#tau=1000mm ",4,2,6);
   tree_XXTo4J_500_1000mm_jets3->SetBinContent(1,12.60504);
   tree_XXTo4J_500_1000mm_jets3->SetBinContent(2,4.351741);
   tree_XXTo4J_500_1000mm_jets3->SetBinContent(3,1.170468);
   tree_XXTo4J_500_1000mm_jets3->SetBinContent(4,0.220088);
   tree_XXTo4J_500_1000mm_jets3->SetBinError(1,0.3551068);
   tree_XXTo4J_500_1000mm_jets3->SetBinError(2,0.20865);
   tree_XXTo4J_500_1000mm_jets3->SetBinError(3,0.1082098);
   tree_XXTo4J_500_1000mm_jets3->SetBinError(4,0.04692293);
   tree_XXTo4J_500_1000mm_jets3->SetMinimum(-1.396588);
   tree_XXTo4J_500_1000mm_jets3->SetMaximum(29.67493);
   tree_XXTo4J_500_1000mm_jets3->SetEntries(1834);
   tree_XXTo4J_500_1000mm_jets3->SetStats(0);
   tree_XXTo4J_500_1000mm_jets3->SetFillStyle(0);

   ci = TColor::GetColor("#990000");
   tree_XXTo4J_500_1000mm_jets3->SetLineColor(ci);
   tree_XXTo4J_500_1000mm_jets3->SetLineWidth(2);

   ci = TColor::GetColor("#990000");
   tree_XXTo4J_500_1000mm_jets3->SetMarkerColor(ci);
   tree_XXTo4J_500_1000mm_jets3->GetXaxis()->SetLabelFont(42);
   tree_XXTo4J_500_1000mm_jets3->GetXaxis()->SetLabelSize(0.05);
   tree_XXTo4J_500_1000mm_jets3->GetXaxis()->SetTitleSize(0.06);
   tree_XXTo4J_500_1000mm_jets3->GetXaxis()->SetTitleFont(42);
   tree_XXTo4J_500_1000mm_jets3->GetYaxis()->SetLabelFont(42);
   tree_XXTo4J_500_1000mm_jets3->GetYaxis()->SetLabelSize(0.05);
   tree_XXTo4J_500_1000mm_jets3->GetYaxis()->SetTitleSize(0.06);
   tree_XXTo4J_500_1000mm_jets3->GetYaxis()->SetTitleFont(42);
   tree_XXTo4J_500_1000mm_jets3->GetZaxis()->SetLabelFont(42);
   tree_XXTo4J_500_1000mm_jets3->GetZaxis()->SetLabelSize(0.05);
   tree_XXTo4J_500_1000mm_jets3->GetZaxis()->SetTitleSize(0.06);
   tree_XXTo4J_500_1000mm_jets3->GetZaxis()->SetTitleFont(42);
   tree_XXTo4J_500_1000mm_jets3->Draw("hist same");
   
   TH1F *tree_XXTo4J_500_10mm_jets4 = new TH1F("tree_XXTo4J_500_10mm_jets4"," XX4J m_{X}=300GeV c#tau=10mm  ",4,2,6);
   tree_XXTo4J_500_10mm_jets4->SetBinContent(1,25.72);
   tree_XXTo4J_500_10mm_jets4->SetBinContent(2,12.89);
   tree_XXTo4J_500_10mm_jets4->SetBinContent(3,5.56);
   tree_XXTo4J_500_10mm_jets4->SetBinContent(4,0.96);
   tree_XXTo4J_500_10mm_jets4->SetBinContent(5,0.1);
   tree_XXTo4J_500_10mm_jets4->SetBinError(1,0.5071489);
   tree_XXTo4J_500_10mm_jets4->SetBinError(2,0.3590265);
   tree_XXTo4J_500_10mm_jets4->SetBinError(3,0.2357965);
   tree_XXTo4J_500_10mm_jets4->SetBinError(4,0.09797959);
   tree_XXTo4J_500_10mm_jets4->SetBinError(5,0.03162278);
   tree_XXTo4J_500_10mm_jets4->SetMinimum(-1.396588);
   tree_XXTo4J_500_10mm_jets4->SetMaximum(29.67493);
   tree_XXTo4J_500_10mm_jets4->SetEntries(4523);
   tree_XXTo4J_500_10mm_jets4->SetStats(0);
   tree_XXTo4J_500_10mm_jets4->SetFillStyle(0);

   ci = TColor::GetColor("#9999ff");
   tree_XXTo4J_500_10mm_jets4->SetLineColor(ci);
   tree_XXTo4J_500_10mm_jets4->SetLineWidth(2);

   ci = TColor::GetColor("#9999ff");
   tree_XXTo4J_500_10mm_jets4->SetMarkerColor(ci);
   tree_XXTo4J_500_10mm_jets4->GetXaxis()->SetLabelFont(42);
   tree_XXTo4J_500_10mm_jets4->GetXaxis()->SetLabelSize(0.05);
   tree_XXTo4J_500_10mm_jets4->GetXaxis()->SetTitleSize(0.06);
   tree_XXTo4J_500_10mm_jets4->GetXaxis()->SetTitleFont(42);
   tree_XXTo4J_500_10mm_jets4->GetYaxis()->SetLabelFont(42);
   tree_XXTo4J_500_10mm_jets4->GetYaxis()->SetLabelSize(0.05);
   tree_XXTo4J_500_10mm_jets4->GetYaxis()->SetTitleSize(0.06);
   tree_XXTo4J_500_10mm_jets4->GetYaxis()->SetTitleFont(42);
   tree_XXTo4J_500_10mm_jets4->GetZaxis()->SetLabelFont(42);
   tree_XXTo4J_500_10mm_jets4->GetZaxis()->SetLabelSize(0.05);
   tree_XXTo4J_500_10mm_jets4->GetZaxis()->SetTitleSize(0.06);
   tree_XXTo4J_500_10mm_jets4->GetZaxis()->SetTitleFont(42);
   tree_XXTo4J_500_10mm_jets4->Draw("hist same");
   
   TH1F *tree_DATA_DisplacedJet_jets5 = new TH1F("tree_DATA_DisplacedJet_jets5"," Displaced PD Data",4,2,6);
   tree_DATA_DisplacedJet_jets5->SetMinimum(-1.396588);
   tree_DATA_DisplacedJet_jets5->SetMaximum(29.67493);
   tree_DATA_DisplacedJet_jets5->SetStats(0);
   tree_DATA_DisplacedJet_jets5->SetFillStyle(0);
   tree_DATA_DisplacedJet_jets5->SetLineWidth(3);
   tree_DATA_DisplacedJet_jets5->SetMarkerStyle(8);
   tree_DATA_DisplacedJet_jets5->SetMarkerSize(1.3);
   tree_DATA_DisplacedJet_jets5->GetXaxis()->SetLabelFont(42);
   tree_DATA_DisplacedJet_jets5->GetXaxis()->SetLabelSize(0.05);
   tree_DATA_DisplacedJet_jets5->GetXaxis()->SetTitleSize(0.06);
   tree_DATA_DisplacedJet_jets5->GetXaxis()->SetTitleFont(42);
   tree_DATA_DisplacedJet_jets5->GetYaxis()->SetLabelFont(42);
   tree_DATA_DisplacedJet_jets5->GetYaxis()->SetLabelSize(0.05);
   tree_DATA_DisplacedJet_jets5->GetYaxis()->SetTitleSize(0.06);
   tree_DATA_DisplacedJet_jets5->GetYaxis()->SetTitleFont(42);
   tree_DATA_DisplacedJet_jets5->GetZaxis()->SetLabelFont(42);
   tree_DATA_DisplacedJet_jets5->GetZaxis()->SetLabelSize(0.05);
   tree_DATA_DisplacedJet_jets5->GetZaxis()->SetTitleSize(0.06);
   tree_DATA_DisplacedJet_jets5->GetZaxis()->SetTitleFont(42);
   tree_DATA_DisplacedJet_jets5->Draw("p same");
   
   TH1F *tree_XXTo4J_500_3mm_jets6 = new TH1F("tree_XXTo4J_500_3mm_jets6"," XX4J m_{X}=300GeV c#tau=3mm  ",4,2,6);
   tree_XXTo4J_500_3mm_jets6->SetBinContent(1,10.17);
   tree_XXTo4J_500_3mm_jets6->SetBinContent(2,2.21);
   tree_XXTo4J_500_3mm_jets6->SetBinContent(3,0.46);
   tree_XXTo4J_500_3mm_jets6->SetBinContent(4,0.06);
   tree_XXTo4J_500_3mm_jets6->SetBinContent(5,0.01);
   tree_XXTo4J_500_3mm_jets6->SetBinError(1,0.3189044);
   tree_XXTo4J_500_3mm_jets6->SetBinError(2,0.1486607);
   tree_XXTo4J_500_3mm_jets6->SetBinError(3,0.0678233);
   tree_XXTo4J_500_3mm_jets6->SetBinError(4,0.0244949);
   tree_XXTo4J_500_3mm_jets6->SetBinError(5,0.01);
   tree_XXTo4J_500_3mm_jets6->SetMinimum(-1.396588);
   tree_XXTo4J_500_3mm_jets6->SetMaximum(29.67493);
   tree_XXTo4J_500_3mm_jets6->SetEntries(1291);
   tree_XXTo4J_500_3mm_jets6->SetStats(0);
   tree_XXTo4J_500_3mm_jets6->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   tree_XXTo4J_500_3mm_jets6->SetLineColor(ci);
   tree_XXTo4J_500_3mm_jets6->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   tree_XXTo4J_500_3mm_jets6->SetMarkerColor(ci);
   tree_XXTo4J_500_3mm_jets6->GetXaxis()->SetLabelFont(42);
   tree_XXTo4J_500_3mm_jets6->GetXaxis()->SetLabelSize(0.05);
   tree_XXTo4J_500_3mm_jets6->GetXaxis()->SetTitleSize(0.06);
   tree_XXTo4J_500_3mm_jets6->GetXaxis()->SetTitleFont(42);
   tree_XXTo4J_500_3mm_jets6->GetYaxis()->SetLabelFont(42);
   tree_XXTo4J_500_3mm_jets6->GetYaxis()->SetLabelSize(0.05);
   tree_XXTo4J_500_3mm_jets6->GetYaxis()->SetTitleSize(0.06);
   tree_XXTo4J_500_3mm_jets6->GetYaxis()->SetTitleFont(42);
   tree_XXTo4J_500_3mm_jets6->GetZaxis()->SetLabelFont(42);
   tree_XXTo4J_500_3mm_jets6->GetZaxis()->SetLabelSize(0.05);
   tree_XXTo4J_500_3mm_jets6->GetZaxis()->SetTitleSize(0.06);
   tree_XXTo4J_500_3mm_jets6->GetZaxis()->SetTitleFont(42);
   tree_XXTo4J_500_3mm_jets6->Draw("hist same");
   
   TH1F *tree_XXTo4J_500_300mm_jets7 = new TH1F("tree_XXTo4J_500_300mm_jets7"," XX4J m_{X}=300GeV c#tau=300mm ",4,2,6);
   tree_XXTo4J_500_300mm_jets7->SetBinContent(1,21.55);
   tree_XXTo4J_500_300mm_jets7->SetBinContent(2,13.98);
   tree_XXTo4J_500_300mm_jets7->SetBinContent(3,5.4);
   tree_XXTo4J_500_300mm_jets7->SetBinContent(4,1.2);
   tree_XXTo4J_500_300mm_jets7->SetBinContent(5,0.04);
   tree_XXTo4J_500_300mm_jets7->SetBinError(1,0.4642198);
   tree_XXTo4J_500_300mm_jets7->SetBinError(2,0.3738984);
   tree_XXTo4J_500_300mm_jets7->SetBinError(3,0.232379);
   tree_XXTo4J_500_300mm_jets7->SetBinError(4,0.1095445);
   tree_XXTo4J_500_300mm_jets7->SetBinError(5,0.02);
   tree_XXTo4J_500_300mm_jets7->SetMinimum(-1.396588);
   tree_XXTo4J_500_300mm_jets7->SetMaximum(29.67493);
   tree_XXTo4J_500_300mm_jets7->SetEntries(4217);
   tree_XXTo4J_500_300mm_jets7->SetStats(0);
   tree_XXTo4J_500_300mm_jets7->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   tree_XXTo4J_500_300mm_jets7->SetLineColor(ci);
   tree_XXTo4J_500_300mm_jets7->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   tree_XXTo4J_500_300mm_jets7->SetMarkerColor(ci);
   tree_XXTo4J_500_300mm_jets7->GetXaxis()->SetLabelFont(42);
   tree_XXTo4J_500_300mm_jets7->GetXaxis()->SetLabelSize(0.05);
   tree_XXTo4J_500_300mm_jets7->GetXaxis()->SetTitleSize(0.06);
   tree_XXTo4J_500_300mm_jets7->GetXaxis()->SetTitleFont(42);
   tree_XXTo4J_500_300mm_jets7->GetYaxis()->SetLabelFont(42);
   tree_XXTo4J_500_300mm_jets7->GetYaxis()->SetLabelSize(0.05);
   tree_XXTo4J_500_300mm_jets7->GetYaxis()->SetTitleSize(0.06);
   tree_XXTo4J_500_300mm_jets7->GetYaxis()->SetTitleFont(42);
   tree_XXTo4J_500_300mm_jets7->GetZaxis()->SetLabelFont(42);
   tree_XXTo4J_500_300mm_jets7->GetZaxis()->SetLabelSize(0.05);
   tree_XXTo4J_500_300mm_jets7->GetZaxis()->SetTitleSize(0.06);
   tree_XXTo4J_500_300mm_jets7->GetZaxis()->SetTitleFont(42);
   tree_XXTo4J_500_300mm_jets7->Draw("hist same");
   
   TLegend *leg = new TLegend(0.73,0.41,0.92,0.83,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("tree_XXTo4J_500_3mm_jets"," 3mm ","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tree_XXTo4J_500_10mm_jets"," 10mm ","pl");

   ci = TColor::GetColor("#9999ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#9999ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tree_XXTo4J_500_30mm_jets"," 30mm ","pl");

   ci = TColor::GetColor("#ff9999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff9999");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tree_XXTo4J_500_300mm_jets"," 300mm ","pl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tree_XXTo4J_500_1000mm_jets"," 1000mm ","pl");

   ci = TColor::GetColor("#990000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#990000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tree_DATA_DisplacedJet_jets"," Data ","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1.3);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tree_DATA_DisplacedJet_clone_jets"," Probabilities ","pl");

   ci = TColor::GetColor("#663399");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#663399");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1.3);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.95,0.912,"2.52 fb^{-1} (13 TeV)");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.066);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.912,"CMS");
tex->SetNDC();
   tex->SetTextFont(61);
   tex->SetTextSize(0.0825);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.23375,0.912,"         Preliminary");
tex->SetNDC();
   tex->SetTextFont(52);
   tex->SetTextSize(0.0627);
   tex->SetLineWidth(2);
   tex->Draw();
   pad1->Modified();
   plot->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "The pad 20% of the height",0,0,1,0.4);
   pad2->Draw();
   pad2->cd();
   pad2->Range(0.9333333,-0.365385,6.266667,0.1343549);
   pad2->SetFillColor(0);
   pad2->SetBorderMode(0);
   pad2->SetBorderSize(2);
   pad2->SetGridy();
   pad2->SetTickx(1);
   pad2->SetTicky(1);
   pad2->SetLeftMargin(0.2);
   pad2->SetRightMargin(0.05);
   pad2->SetTopMargin(0);
   pad2->SetBottomMargin(0.4);
   pad2->SetFrameFillStyle(0);
   pad2->SetFrameBorderMode(0);
   pad2->SetFrameFillStyle(0);
   pad2->SetFrameBorderMode(0);
   
   TH1F *tree_DATA_DisplacedJet_clone_jets8 = new TH1F("tree_DATA_DisplacedJet_clone_jets8"," Prediction ",4,2,6);
   tree_DATA_DisplacedJet_clone_jets8->SetBinContent(1,1);
   tree_DATA_DisplacedJet_clone_jets8->SetBinContent(2,1);
   tree_DATA_DisplacedJet_clone_jets8->SetBinContent(3,1);
   tree_DATA_DisplacedJet_clone_jets8->SetBinContent(4,1);
   tree_DATA_DisplacedJet_clone_jets8->SetBinContent(5,1);
   tree_DATA_DisplacedJet_clone_jets8->SetBinError(1,0.01072729);
   tree_DATA_DisplacedJet_clone_jets8->SetBinError(2,0.04534924);
   tree_DATA_DisplacedJet_clone_jets8->SetBinError(3,0.06449631);
   tree_DATA_DisplacedJet_clone_jets8->SetBinError(4,0.1333527);
   tree_DATA_DisplacedJet_clone_jets8->SetBinError(5,0.2403106);
   tree_DATA_DisplacedJet_clone_jets8->SetMinimum(-0.165489);
   tree_DATA_DisplacedJet_clone_jets8->SetMaximum(0.1343549);
   tree_DATA_DisplacedJet_clone_jets8->SetEntries(663.5055);
   tree_DATA_DisplacedJet_clone_jets8->SetStats(0);

   ci = 974;
   color = new TColor(ci, 0.4, 0.2, 0.6, " ", 0.6);
   tree_DATA_DisplacedJet_clone_jets8->SetFillColor(ci);
   tree_DATA_DisplacedJet_clone_jets8->SetFillStyle(3001);
   tree_DATA_DisplacedJet_clone_jets8->SetLineWidth(2);

   ci = TColor::GetColor("#663399");
   tree_DATA_DisplacedJet_clone_jets8->SetMarkerColor(ci);
   tree_DATA_DisplacedJet_clone_jets8->SetMarkerStyle(25);
   tree_DATA_DisplacedJet_clone_jets8->SetMarkerSize(1.3);
   tree_DATA_DisplacedJet_clone_jets8->GetXaxis()->SetTitle("N Jets Tagged");
   tree_DATA_DisplacedJet_clone_jets8->GetXaxis()->SetLabelFont(42);
   tree_DATA_DisplacedJet_clone_jets8->GetXaxis()->SetLabelSize(0.1);
   tree_DATA_DisplacedJet_clone_jets8->GetXaxis()->SetTitleSize(0.11);
   tree_DATA_DisplacedJet_clone_jets8->GetXaxis()->SetTitleOffset(1.15);
   tree_DATA_DisplacedJet_clone_jets8->GetXaxis()->SetTitleFont(42);
   tree_DATA_DisplacedJet_clone_jets8->GetYaxis()->SetTitle("(MC-DATA)/MC");
   tree_DATA_DisplacedJet_clone_jets8->GetYaxis()->SetLabelFont(42);
   tree_DATA_DisplacedJet_clone_jets8->GetYaxis()->SetLabelSize(0.07);
   tree_DATA_DisplacedJet_clone_jets8->GetYaxis()->SetTitleSize(0.1);
   tree_DATA_DisplacedJet_clone_jets8->GetYaxis()->SetTitleOffset(0.8);
   tree_DATA_DisplacedJet_clone_jets8->GetYaxis()->SetTitleFont(42);
   tree_DATA_DisplacedJet_clone_jets8->GetZaxis()->SetLabelFont(42);
   tree_DATA_DisplacedJet_clone_jets8->GetZaxis()->SetLabelSize(0.05);
   tree_DATA_DisplacedJet_clone_jets8->GetZaxis()->SetTitleSize(0.06);
   tree_DATA_DisplacedJet_clone_jets8->GetZaxis()->SetTitleFont(42);
   tree_DATA_DisplacedJet_clone_jets8->Draw("e1");
   pad2->Modified();
   plot->cd();
   plot->Modified();
   plot->cd();
   plot->SetSelected(plot);
}
